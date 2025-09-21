@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) char valid;

- (void).cxx_destruct;
- (char)invalidate:(id *)a0;
- (id)initWithContainerID:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (id)get:(id *)a0;
- (id)getHIDDevices;
- (char)set:(id)a0 error:(id *)a1;
- (char)setupInterface;

@end
