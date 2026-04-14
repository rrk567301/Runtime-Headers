@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _xpcLock;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)_offerPath;
+ (id)defaultOfferManager;
+ (id)_offerFullPath;

- (id)_connection;
- (void)_invalidationHandler;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setOffers:(id)a0;
- (void).cxx_destruct;
- (void)sendBadgeActionMetricsEvents:(id)a0;
- (id)init;
- (void)clearOffers:(id /* block */)a0;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (id)_offers;
- (void)_activeAccountChangedNotification:(id)a0;
- (id)_updateOfferFile;

@end
