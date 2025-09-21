@class MAUSBDeviceVirtual20HubDevice, NSObject;
@protocol OS_dispatch_queue, MAUSBDeviceVirtual20HubPortDelegate;

@interface MAUSBDeviceVirtual20HubPort : MAUSBObject {
    id<MAUSBDeviceVirtual20HubPortDelegate> _delegate;
    char _powered;
    NSObject<OS_dispatch_queue> *_queue;
    char _highSpeed;
    char _ignoreReset;
}

@property (readonly) unsigned char number;
@property (readonly) char powered;
@property (readonly) char enabled;
@property (readonly) unsigned short status;
@property (readonly) unsigned short statusChange;
@property (readonly) char connected;
@property (readonly) MAUSBDeviceVirtual20HubDevice *device;
@property char configuredForRootHub;

- (void).cxx_destruct;
- (void)reset;
- (void)setPowered:(char)a0;
- (unsigned char)setPortFeature:(unsigned short)a0;
- (unsigned char)clearPortFeature:(unsigned short)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithNumber:(unsigned char)a0 delegate:(id)a1 queue:(id)a2;
- (char)insertDevice:(id)a0;
- (void)notifyChange;
- (char)removeDevice;

@end
