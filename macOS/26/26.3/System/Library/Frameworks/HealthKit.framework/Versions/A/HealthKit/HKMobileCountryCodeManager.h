@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (id)_overrideISOCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;
+ (BOOL)isOverridePresent;
+ (id)overrideMobileCountryCode;

- (id)currentCountryCode;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)init;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (id)currentEstimate;
- (void)dealloc;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;

@end
