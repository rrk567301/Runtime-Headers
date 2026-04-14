@class NSObject;
@protocol OS_dispatch_group;

@interface AXFDispatchGroup : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_group;

- (BOOL)waitWithTimeout:(long long)a0;
- (id)init;
- (void)leave;
- (void).cxx_destruct;
- (void)enter;
- (void)wait;
- (void)notifyWithQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyWithQueue:(id)a0 workItem:(id)a1;

@end
