@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKCurrentCountryCodeProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (BOOL)isOverridePresent;
+ (void)setOverrideMobileCountryCode:(id)a0;
+ (id)overrideMobileCountryCode;
+ (id)_overrideISOCountryCode;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentCountryCode;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;

@end
