@class NSMutableDictionary;

@interface MAUSBDeviceVirtual20RootHub : MAUSBDeviceVirtual20Hub <MAUSBDevicePortMonitorDelegate> {
    NSMutableDictionary *_portMonitors;
    NSMutableDictionary *_virtualPALs;
}

- (void).cxx_destruct;
- (char)configureMonitoringForPortNumber:(unsigned char)a0 devicePAL:(id)a1;
- (char)configureMonitoringForPortNumber:(unsigned char)a0 locationID:(unsigned int)a1;
- (char)configurePortNumber:(unsigned char)a0 forLocationID:(unsigned int)a1;
- (char)configurePortNumber:(unsigned char)a0 forLocationID:(unsigned int)a1 internal:(char)a2;
- (char)configurePortNumber:(unsigned char)a0 forVirtualDevice:(id)a1;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithPortCount:(unsigned char)a0 queue:(id)a1;
- (void)portStatusChangedForRouteString:(id)a0 portStatus:(unsigned char)a1;

@end
