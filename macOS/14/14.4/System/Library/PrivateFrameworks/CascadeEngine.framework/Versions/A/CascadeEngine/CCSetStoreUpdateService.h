@class NSString, CCDonateConnectionFactory, CCDonateRequestManager, CCDataSiteManager, NSObject;
@protocol OS_dispatch_queue;

@interface CCSetStoreUpdateService : NSObject <NSXPCListenerDelegate> {
    CCDataSiteManager *_dataSiteManager;
    CCDonateRequestManager *_donateRequestManager;
    CCDonateConnectionFactory *_donateConnectionFactory;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithQueue:(id)a0;

@end
