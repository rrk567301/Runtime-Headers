@class CCDonateConnectionFactory, _PASSimpleCoalescingTimer, CCDonateRequestManager, CCDataResourceWriteAccess, NSObject;
@protocol OS_dispatch_queue;

@interface CCSetStoreUpdateService : NSObject <BMXPCListenerDelegate> {
    CCDataResourceWriteAccess *_writeAccess;
    CCDonateRequestManager *_donateRequestManager;
    CCDonateConnectionFactory *_donateConnectionFactory;
    _PASSimpleCoalescingTimer *_eagerExitTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
