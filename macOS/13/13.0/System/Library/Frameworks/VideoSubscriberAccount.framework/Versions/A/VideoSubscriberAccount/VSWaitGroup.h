@class NSObject;
@protocol OS_dispatch_group;

@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)wait;
- (void)leave;
- (void)enter;
- (BOOL)waitWithMilliseconds:(unsigned long long)a0;

@end
