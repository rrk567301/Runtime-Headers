@class NSString;

@interface ILNotificationNode : NSObject {
    id observer;
    NSString *path;
    long long flags;
}

- (long long)flags;
- (id)observer;
- (id)path;
- (void)dealloc;
- (id)initWithObserver:(id)a0 path:(id)a1 flags:(long long)a2;

@end
