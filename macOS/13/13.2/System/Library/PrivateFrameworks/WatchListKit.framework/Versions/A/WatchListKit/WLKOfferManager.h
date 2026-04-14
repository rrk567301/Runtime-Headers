@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)defaultOfferManager;
+ (id)_offerPath;
+ (id)_offerFullPath;

- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (id)_offers;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)clearOffers:(id /* block */)a0;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setOffers:(id)a0;
- (id)_updateOfferFile;

@end
