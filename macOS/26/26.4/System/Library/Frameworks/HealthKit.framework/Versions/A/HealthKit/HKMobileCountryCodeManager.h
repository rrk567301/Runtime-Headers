@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (BOOL)isOverridePresent;
+ (id)_overrideISOCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;
+ (id)overrideMobileCountryCode;

- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (id)currentEstimate;
- (id)currentCountryCode;
- (void).cxx_destruct;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)init;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
