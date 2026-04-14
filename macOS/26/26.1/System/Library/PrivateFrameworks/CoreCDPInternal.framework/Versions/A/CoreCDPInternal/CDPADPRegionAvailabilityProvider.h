@class AKWalrusConfigProvider;

@interface CDPADPRegionAvailabilityProvider : NSObject {
    AKWalrusConfigProvider *_configProvider;
}

- (void).cxx_destruct;
- (id)initWithWalrusConfigProvider:(id)a0;
- (void)isWalrusEnabledForPrimaryAccountWithCompletionHandler:(id /* block */)a0;

@end
