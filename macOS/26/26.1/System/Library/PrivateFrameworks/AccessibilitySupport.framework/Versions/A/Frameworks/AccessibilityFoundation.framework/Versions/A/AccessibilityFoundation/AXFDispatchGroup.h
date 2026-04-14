@class NSObject;
@protocol OS_dispatch_group;

@interface AXFDispatchGroup : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_group;

- (void)wait;
- (void)enter;
- (BOOL)waitWithTimeout:(long long)a0;
- (void).cxx_destruct;
- (void)leave;
- (id)init;
- (void)notifyWithQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyWithQueue:(id)a0 workItem:(id)a1;

@end
