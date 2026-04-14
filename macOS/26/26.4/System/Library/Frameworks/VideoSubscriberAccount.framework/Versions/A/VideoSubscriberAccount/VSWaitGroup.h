@class NSObject;
@protocol OS_dispatch_group;

@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (BOOL)wait;
- (void).cxx_destruct;
- (void)leave;
- (id)init;
- (void)enter;
- (BOOL)waitWithMilliseconds:(unsigned long long)a0;

@end
