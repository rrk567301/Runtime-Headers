@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) BOOL valid;

- (id)initWithService:(unsigned int)a0;
- (BOOL)invalidate:(id *)a0;
- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)get:(id *)a0;
- (id)getHIDDevices;
- (BOOL)set:(id)a0 error:(id *)a1;
- (BOOL)setupInterface;

@end
