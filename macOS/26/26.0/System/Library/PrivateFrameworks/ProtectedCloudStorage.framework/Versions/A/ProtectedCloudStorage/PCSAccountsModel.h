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

+ (BOOL)currentPersonaSupportsPrimaryAccount:(id *)a0;
+ (BOOL)accountEligibleForMBRestoreForAltDSID:(id)a0 error:(id *)a1;
+ (id)accountForCurrentPersona;
+ (BOOL)adpEnabledForDSID:(id)a0 error:(id *)a1;
+ (BOOL)accountEligibleForMBRestoreForDSID:(id)a0 error:(id *)a1;
+ (id)settingsKeyForKey:(id)a0 error:(id *)a1;
+ (id)altDSIDForDSID:(id)a0;
+ (id)defaultAccountsModel;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void)update;
- (void)faultIfCurrentPersonaIsDataSeparated;
- (void).cxx_destruct;

@end
