@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ENCoreTelephonyUtility : NSObject

@property (retain, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;
+ (id)mobileCountryCodeForISO:(id)a0;
+ (id)countryCodeISOForMobileCountryCode:(id)a0;

- (id)countryCodeISOForMobileCountryCode:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentMobileCountryCode;
- (void)removeObserver:(id)a0;
- (id)currentPhoneNumbers;
- (id)init;
- (void)addObserver:(id)a0;

@end
