@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (char)factoryReset:(unsigned char)a0 securityToken:(unsigned long long)a1 error:(id *)a2;
- (id)getHIDDevices;
- (char)getSecurityToken:(unsigned long long *)a0 error:(id *)a1;
- (char)setupInterface;

@end
