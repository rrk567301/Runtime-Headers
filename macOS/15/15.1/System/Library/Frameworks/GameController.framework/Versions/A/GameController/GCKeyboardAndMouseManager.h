@class GCMouse;

@interface GCKeyboardAndMouseManager : NSObject

@property (readonly) GCMouse *currentMouse;

+ (id)managerWithQueue:(id)a0;

- (id)init;
- (id)initWithQueue:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)addDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (id)coalescedKeyboard;
- (id)mice;
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;

@end
