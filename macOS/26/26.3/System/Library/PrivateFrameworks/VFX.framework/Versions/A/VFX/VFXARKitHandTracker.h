@interface VFXARKitHandTracker : NSObject

@property (copy, nonatomic) id /* block */ updater;

- (void)start;
- (void)stop;
- (id)init;
- (void)dealloc;

@end
