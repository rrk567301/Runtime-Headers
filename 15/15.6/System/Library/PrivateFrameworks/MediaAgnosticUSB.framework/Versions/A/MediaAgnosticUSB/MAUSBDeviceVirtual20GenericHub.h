@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MAUSBDeviceVirtual20GenericHub : MAUSBDeviceVirtual20Hub <MAUSBDevicePortMonitorDelegate> {
    struct IOUSBDeviceStruct942 **_usbDeviceInterface;
    unsigned int _locationID;
    unsigned int _locationIDPortShift;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_portMonitors;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (char)initLocationIDPortShift;
- (char)initPorts;
- (void)initStrings;
- (id)initWithLocationID:(unsigned int)a0 usbDeviceAddress:(unsigned char)a1 routeString:(id)a2 deviceDatabase:(id)a3 queue:(id)a4;
- (char)insertDeviceForPortNumber:(unsigned char)a0 locationID:(unsigned int)a1 logErrors:(char)a2;
- (unsigned int)locationIDForPortNumber:(unsigned char)a0;
- (void)portStatusChangedForRouteString:(id)a0 portStatus:(unsigned char)a1;
- (id)queryStringForIndex:(unsigned char)a0;
- (char)shouldStealPortNumber:(unsigned char)a0;

@end
