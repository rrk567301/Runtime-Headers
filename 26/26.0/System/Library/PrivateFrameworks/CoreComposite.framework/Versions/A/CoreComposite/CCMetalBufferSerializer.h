@class CCContextDeviceGroup;

@interface CCMetalBufferSerializer : NSObject {
    CCContextDeviceGroup *_deviceGroup;
}

- (void).cxx_destruct;
- (id)deserializeMetalBuffer:(id)a0 deviceGroup:(id)a1;
- (id)initWithDeviceGroup:(id)a0;
- (id)serializeMetalBuffer:(id)a0 deviceGroup:(id)a1;

@end
