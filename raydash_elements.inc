<?php
	drupal_load('module','SWFEmbed');
	function theme_raydash_stream($item) {
            $swf = new SWFObject(RAYDASH_HOST_URL . "/api/2/clientbox/2");
            $swf->noFlash('Install flash')
		    ->minimumVersion('10.3.0')
		    ->height($item['height'])
 		    ->width($item['width'])
		    ->flashVar('autostart',$item['autostart'])
		    ->flashVar('token',$item['token'])
		    ->flashVar('videoOff',$item['videoOff'])
                ->swfFallback('9.0.0',RAYDASH_HOST_URL . "/api/2/clientbox/1");
		return(theme('swfembed_embed',array('swf'=>$swf))); 
	}
	function theme_raydash_record($item) {
		$swf=new SWFObject(RAYDASH_HOST_URL . "/api/2/recordbox/2");
		$swf->noFlash('Install flash')
		    ->minimumVersion('10.3.0')
		    ->height($item['height'])
 		    ->width($item['width'])
		    ->flashVar('autostart',$item['autostart'])
		    ->flashVar('token',$item['token'])
		    ->flashVar('videoOff',$item['videoOff'])
                    ->flashVar('hideControls','1')
                    ->flashVar('hideCamera',$item['hideCamera'])
                 ->swfFallback('9.0.0',RAYDASH_HOST_URL . "/api/2/recordbox/1");
                drupal_add_js("function setSize(width,height,id) {if(id==undefined){id=\"#". $swf->getId() ."\";  }document.getElementById(id).width=width;document.getElementById(id).height=height;}");
		return(theme('swfembed_embed',array('swf'=>$swf))); 
	}
       function theme_raydash_button($item) {
           drupal_add_js(drupal_get_path('module','raydash') . "/behavior.raydash.js");
           $item['text']="blah";
           $html="<div id=\"raydash_next_" . $item['id'] . "\">" . $item['text']  . "</div>";
           $settings['raydash']['next_button'][$item['id']]=array('nid'=>$item['nid']);
           drupal_add_js($settings,array('type'=>'setting'));
           return($html);
       }
?>
