@class NSString, NSArray, HIDDevice, HIDManager;

@interface HIDDisplayInterface : NSObject {
    HIDManager *_manager;
    HIDDevice *_deviceRef;
}

@property (readonly) NSString *containerID;
@property (readonly) unsigned long long registryID;
@property (readonly) NSArray *capabilities;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)device;
- (id)initWithContainerID:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (void)setDevice:(id)a0;
- (char)commit:(id)a0 error:(id *)a1;
- (char)extract:(id)a0 error:(id *)a1;
- (id)extractContainerIDFromService:(unsigned int)a0;
- (id)getDeviceElements:(id)a0;
- (id)getHIDDevices;
- (id)getHIDDevicesForMatching:(id)a0;
- (char)hasMatchingContainerID:(id)a0 containerID:(id)a1;
- (id)initWithMatching:(id)a0;

@end
