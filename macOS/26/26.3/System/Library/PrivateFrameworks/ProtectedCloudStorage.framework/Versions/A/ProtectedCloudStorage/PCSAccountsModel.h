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

+ (BOOL)accountEligibleForMBRestoreForAltDSID:(id)a0 error:(id *)a1;
+ (unsigned long long)dbrStateForDSID:(id)a0;
+ (id)settingsKeyForKey:(id)a0 error:(id *)a1;
+ (id)altDSIDForDSID:(id)a0;
+ (id)defaultAccountsModel;
+ (unsigned long long)dbrStateForAltDSID:(id)a0;
+ (id)accountForCurrentPersona;
+ (BOOL)currentPersonaSupportsPrimaryAccount:(id *)a0;
+ (BOOL)adpEnabledForDSID:(id)a0 error:(id *)a1;
+ (BOOL)accountEligibleForMBRestoreForDSID:(id)a0 error:(id *)a1;

- (void)update;
- (id)init;
- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)faultIfCurrentPersonaIsDataSeparated;

@end
