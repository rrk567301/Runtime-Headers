@class NSObject;
@protocol OS_dispatch_queue;

@interface CCSetChangeRemoteXPCNotifier : NSObject <CCSetChangeNotifierProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (id)client;
- (void).cxx_destruct;
- (void)notifyChangeToSet:(id)a0;
- (void)notifyChangeToSet:(id)a0 completion:(id /* block */)a1;

@end
