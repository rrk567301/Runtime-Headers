@class SKHelperClient, NSObject;
@protocol OS_dispatch_group;

@interface SKSyncXPCCaller : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) SKHelperClient *helperClient;

- (void)wait;
- (id)syncRemoteObject;
- (void).cxx_destruct;
- (id)initWithHelperClient:(id)a0;
- (void)queueWithCompletionBlock:(id /* block */)a0;

@end
