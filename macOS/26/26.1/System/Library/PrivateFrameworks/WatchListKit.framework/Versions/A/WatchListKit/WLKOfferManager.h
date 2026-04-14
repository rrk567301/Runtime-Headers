@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)_offerFullPath;
+ (id)_offerPath;
+ (id)defaultOfferManager;

- (id)_connection;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearOffers:(id /* block */)a0;
- (id)_offers;
- (void)sendBadgeActionMetricsEvents:(id)a0;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setOffers:(id)a0;
- (id)_updateOfferFile;
- (void).cxx_destruct;
- (id)init;

@end
