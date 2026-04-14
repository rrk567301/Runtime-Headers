@class NSObject;
@protocol OS_dispatch_queue;

@interface CCSetChangeRemoteXPCNotifier : NSObject <CCSetChangeNotifierProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)client;
- (id)init;
- (void)notifyChangeToSet:(id)a0;
- (void)notifyChangeToSet:(id)a0 completion:(id /* block */)a1;

@end
