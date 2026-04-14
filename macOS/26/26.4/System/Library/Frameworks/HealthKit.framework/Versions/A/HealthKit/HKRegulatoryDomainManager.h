@class NSString;

@interface HKRegulatoryDomainManager : NSObject <HKRegulatoryDomainProvider> {
    id /* block */ _currentEstimatesProvider;
}

@property (class, copy, nonatomic) NSString *overrideISOCountryCode;

+ (BOOL)isOverridePresent;
+ (id)registerForUpdatesWithBlock:(id /* block */)a0 queue:(id)a1;
+ (BOOL)unregisterForUpdatesWithToken:(id)a0;

- (id)currentEstimate;
- (id)currentCountryCode;
- (void).cxx_destruct;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)init;
- (id)initWithCurrentEstimatesProvider:(id /* block */)a0;

@end
