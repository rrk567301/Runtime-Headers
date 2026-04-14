@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (id)overrideMobileCountryCode;
+ (id)_overrideISOCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;
+ (BOOL)isOverridePresent;

- (id)currentCountryCode;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (id)currentEstimate;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)init;

@end
