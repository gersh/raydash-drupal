<?php
	function raydash_site_settings() {
            $form=array();
		$form['raydash_userid'] = array(
			'#type' => 'textfield',
			'#title' => 'Raydash userid',
			'#default_value' => variable_get('raydash_userid',''),
			'#required' => TRUE);
		$form['raydash_secret'] = array(
			'#type' => 'textfield',
			'#title' => 'Raydash secret',
			'#default_value' => variable_get('raydash_secret',''),
			'#required' => TRUE);
		return(system_settings_form($form));	
	}
?>
