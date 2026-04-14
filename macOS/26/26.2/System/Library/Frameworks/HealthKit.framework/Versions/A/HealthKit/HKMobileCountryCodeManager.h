@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (id)overrideMobileCountryCode;
+ (BOOL)isOverridePresent;
+ (id)_overrideISOCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;

- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)currentEstimate;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)init;
- (id)currentCountryCode;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)dealloc;

@end
