INTRODUCTION
=================

Current Maintainer: Gershon Bialer<gershon@raydash.com>

Raydash lets you stream live-video through your Drupal site. You will need to supply the userid and secret from Raydash to use this module. This can be obtained from http://www.raydash.com/.


THEME ELEMENTS
===================
raydash_stream
--------------------
This is used to watch a stream. It takes the following parameters:
*height Height of the flash element
*width Width of the flash element
*autostart Should this element be automically started when the page is loaded
*token This is the token for this element. You will need to generate it with raydash_get_token
*videoOff If this is set to "1", there will be no video. Only audio.

raydash_record
---------------------
This works with the webcam to show a live stream. It takes the following parameters:
*height Height of flash element
*width Width of the flash element
*autostart Should this be automatically started when the page loads
*token This is the token for this element. You will need to generate it with raydash_get_token
*videoOff If this is set to "1", tehre will be no video shown. You can use this if you want the webcam to invisible. However, the webcam flash element will still load initially to ask the user permission to use their webcam before it disappears.

API FUNCTIONS
==============
raydash_get_token
------------------------
Request a new token, which is needed for a raydash_stream or a raydash_record

raydash_change_stream
------------------------------
Change where a ClientBox is streaming from. Basically, you are pointing tokenA's stream to point at what is being brodcast to tokenB. For example, if you have three people A, B, and C. raydash_change_stream(B,C) will make person B, see and hear person C.
-tokenA The token for the record_stream
-tokenB The token for the record_box we will be pointing to after this call
