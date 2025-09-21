@interface CMGestureManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ gestureHandler;

+ (void)setGestureServiceEnabled:(char)a0;
+ (char)isGestureServiceAvailable;
+ (char)isGestureServiceEnabled;

- (void)dealloc;
- (id)init;
- (id)initWithPriority:(int)a0;

@end
