@class NSString, KMProviderBridgeFactory, NSObject;
@protocol CKVDonatorProvider;

@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider> {
    NSObject<CKVDonatorProvider> *_donatorProvider;
    double _timeout;
    KMProviderBridgeFactory *_factory;
}

@property BOOL useSimulatedProviderBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)clearTaskForId:(unsigned short)a0;
- (id)derivativeTaskForId:(unsigned short)a0 usingLocalization:(id)a1 modifiedItemIds:(id)a2;
- (void)enableSimulatedTasks:(BOOL)a0;
- (id)initWithServiceProvider:(id)a0 directory:(id)a1 timeout:(double)a2;
- (void)setupBridgeListenersWithHandler:(id /* block */)a0;
- (id)taskForId:(unsigned short)a0 usingLocalization:(id)a1;
- (id)verificationTaskForId:(unsigned short)a0;

@end
