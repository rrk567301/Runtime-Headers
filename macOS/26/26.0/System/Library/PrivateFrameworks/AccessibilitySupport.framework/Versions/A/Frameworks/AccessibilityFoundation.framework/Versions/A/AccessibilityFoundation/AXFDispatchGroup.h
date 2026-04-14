@class NSObject;
@protocol OS_dispatch_group;

@interface AXFDispatchGroup : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_group;

- (void)enter;
- (void)wait;
- (id)init;
- (BOOL)waitWithTimeout:(long long)a0;
- (void)leave;
- (void).cxx_destruct;
- (void)notifyWithQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyWithQueue:(id)a0 workItem:(id)a1;

@end
