@class NSObject;
@protocol OS_dispatch_group;

@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (BOOL)wait;
- (void)enter;
- (void).cxx_destruct;
- (void)leave;
- (id)init;
- (BOOL)waitWithMilliseconds:(unsigned long long)a0;

@end
