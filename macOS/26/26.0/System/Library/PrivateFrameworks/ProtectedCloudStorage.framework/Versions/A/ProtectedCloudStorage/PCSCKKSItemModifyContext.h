@class PCSLockAssertion, NSString, NSMutableDictionary, PCSMTT, NSObject;
@protocol OS_os_transaction;

@interface PCSCKKSItemModifyContext : NSObject

@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) PCSLockAssertion *lockAssertion;
@property (retain) id activityAssertion;
@property struct _PCSIdentitySetData { } *set;
@property struct __PCSLogContext { } *log;
@property long long timeoutValue;
@property (retain) NSString *dsid;
@property (retain) NSMutableDictionary *serviceContexts;
@property BOOL sync;
@property BOOL forceSync;
@property (readonly) PCSMTT *mtt;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetIdentities;
- (void)setCurrentIdentityForService:(id)a0 identity:(struct _PCSIdentityData { } *)a1 persistentReference:(id)a2;

@end
