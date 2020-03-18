# ARM
stm labs  
file:///C:/Program%20Files%20(x86)/Keil_v5/prj/Packs_Target%201.htm  
<h>USB Device 0
   <o>Connect to hardware via Driver_USBD# <0-255>
   <i>Select driver control block for hardware interface.  
      
#define USBD0_PORT                      0								

   <o.0>High-speed
   <i>Enable High-speed functionality (if device supports it).
#define USBD0_HS                        0

   <h>Device Settings
  <i>These settings are used to create the Device Descriptor
     <o>Max Endpoint 0 Packet Size
     <i>Maximum packet size for Endpoint 0 (bMaxPacketSize0).
       <8=>8 Bytes <16=>16 Bytes <32=>32 Bytes <64=>64 Bytes
#define USBD0_MAX_PACKET0               8

     <o.0..15>Vendor ID <0x0000-0xFFFF>
     <i>Vendor ID assigned by USB-IF (idVendor).
#define USBD0_DEV_DESC_IDVENDOR         0xC251

     <o.0..15>Product ID <0x0000-0xFFFF>
     <i>Product ID assigned by manufacturer (idProduct).
#define USBD0_DEV_DESC_IDPRODUCT        0x0000

     <o.0..15>Device Release Number <0x0000-0xFFFF>
     <i>Device Release Number in binary-coded decimal (bcdDevice)
#define USBD0_DEV_DESC_BCDDEVICE        0x0100

   </h>

