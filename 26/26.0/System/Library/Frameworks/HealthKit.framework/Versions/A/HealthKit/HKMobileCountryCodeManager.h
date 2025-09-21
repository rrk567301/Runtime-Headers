@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (BOOL)isOverridePresent;
+ (id)overrideMobileCountryCode;
+ (id)_overrideISOCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;

- (void)dealloc;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)currentEstimate;
- (id)init;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (id)currentCountryCode;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (void).cxx_destruct;

@end
