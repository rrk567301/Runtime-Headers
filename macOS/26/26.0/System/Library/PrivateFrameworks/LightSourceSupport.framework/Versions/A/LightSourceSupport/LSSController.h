@class LSSCAService, NSString, BSCompoundAssertion, LSSSettings, LSSXPCService, NSObject;
@protocol OS_dispatch_queue, LSSProvider;

@interface LSSController : NSObject <LSSProviderDelegate, LSSSubscriptionProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    LSSXPCService *_xpc;
    id<LSSProvider> _extendedProvider;
    id<LSSProvider> _provider;
    NSString *_extendedProviderSetting;
    NSString *_providerSetting;
    LSSCAService *_caService;
    BSCompoundAssertion *_disableOutput;
    BSCompoundAssertion *_useLowPower;
    BSCompoundAssertion *_needsOrientation;
    BSCompoundAssertion *_needsLight;
    BSCompoundAssertion *_responsiveMotion;
    long long _features;
    LSSSettings *_settings;
    BOOL _idling;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)addAssertion:(unsigned int)a0 reason:(id)a1;
- (void)provider:(id)a0 updatedLight:(struct { double x0; double x1; struct { } x2; BOOL x3; })a1;

@end
