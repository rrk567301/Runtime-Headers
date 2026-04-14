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

- (id)initWithQueue:(id)a0;
- (void)simLessSubscriptionsDidChange;
- (void)plmnChanged:(id)a0 plmn:(id)a1;
- (void)activeSubscriptionsDidChange;
- (void).cxx_destruct;
- (void)invalidateCachedCountryCode;
- (BOOL)isEmergencyServicePhoneNumber:(id)a0;
- (void)subscriptionInfoDidChange;
- (id)init;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)onForeground:(id)a0;
- (void)dealloc;

@end
