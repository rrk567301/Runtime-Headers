@interface CMGestureManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ gestureHandler;

+ (void)setGestureServiceEnabled:(BOOL)a0;
+ (BOOL)isGestureServiceAvailable;
+ (BOOL)isGestureServiceEnabled;

- (id)init;
- (id)initWithPriority:(int)a0;
- (void)dealloc;

@end
