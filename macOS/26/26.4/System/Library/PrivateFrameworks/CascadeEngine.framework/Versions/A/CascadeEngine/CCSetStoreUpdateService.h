@class CCDonationServiceFactory, _PASSimpleCoalescingTimer, CCDataResourceWriteAccess, NSObject;
@protocol OS_dispatch_queue;

@interface CCSetStoreUpdateService : NSObject <BMXPCListenerDelegate> {
    CCDataResourceWriteAccess *_writeAccess;
    CCDonationServiceFactory *_donationServiceFactory;
    _PASSimpleCoalescingTimer *_eagerExitTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
