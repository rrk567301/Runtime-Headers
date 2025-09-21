@class NSObject;
@protocol OS_dispatch_group;

@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (id)init;
- (void).cxx_destruct;
- (char)wait;
- (void)enter;
- (void)leave;
- (char)waitWithMilliseconds:(unsigned long long)a0;

@end
