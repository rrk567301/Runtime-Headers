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

+ (BOOL)accountEligibleForMBRestoreForDSID:(id)a0 error:(id *)a1;
+ (BOOL)accountEligibleForMBRestoreForAltDSID:(id)a0 error:(id *)a1;
+ (id)altDSIDForDSID:(id)a0;
+ (id)accountForCurrentPersona;
+ (unsigned long long)dbrStateForAltDSID:(id)a0;
+ (id)defaultAccountsModel;
+ (unsigned long long)dbrStateForDSID:(id)a0;
+ (BOOL)adpEnabledForDSID:(id)a0 error:(id *)a1;
+ (id)settingsKeyForKey:(id)a0 error:(id *)a1;
+ (BOOL)currentPersonaSupportsPrimaryAccount:(id *)a0;

- (void)update;
- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)faultIfCurrentPersonaIsDataSeparated;
- (id)init;

@end
