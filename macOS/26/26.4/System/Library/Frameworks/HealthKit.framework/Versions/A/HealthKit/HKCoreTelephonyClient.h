@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface HKCoreTelephonyClient : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSString *_cachedCountryCode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onForeground:(id)a0;
- (void)simLessSubscriptionsDidChange;
- (id)initWithQueue:(id)a0;
- (BOOL)isEmergencyServicePhoneNumber:(id)a0;
- (void)subscriptionInfoDidChange;
- (void).cxx_destruct;
- (void)plmnChanged:(id)a0 plmn:(id)a1;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)init;
- (void)invalidateCachedCountryCode;
- (void)activeSubscriptionsDidChange;
- (void)dealloc;

@end
