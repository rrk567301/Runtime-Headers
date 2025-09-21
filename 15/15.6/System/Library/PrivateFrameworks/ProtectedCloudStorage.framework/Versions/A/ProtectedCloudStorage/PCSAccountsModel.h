@class NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface PCSAccountsModel : NSObject

@property (retain) ACAccountStore *store;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL accountsChanged;
@property (readonly) NSString *username;
@property (readonly) NSString *dsid;
@property (readonly) NSString *identifier;
@property (readonly) NSString *lastError;

+ (id)altDSIDForDSID:(id)a0;
+ (char)accountEligibleForMBRestoreForAltDSID:(id)a0 error:(id *)a1;
+ (char)accountEligibleForMBRestoreForDSID:(id)a0 error:(id *)a1;
+ (id)accountForCurrentPersona;
+ (char)adpEnabledForDSID:(id)a0 error:(id *)a1;
+ (char)currentPersonaSupportsPrimaryAccount:(id *)a0;
+ (id)defaultAccountsModel;
+ (unsigned long long)guitarfishStateForAltDSID:(id)a0;
+ (unsigned long long)guitarfishStateForDSID:(id)a0;
+ (id)settingsKeyForKey:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)_accountStoreDidChange:(id)a0;
- (void)faultIfCurrentPersonaIsDataSeparated;

@end
