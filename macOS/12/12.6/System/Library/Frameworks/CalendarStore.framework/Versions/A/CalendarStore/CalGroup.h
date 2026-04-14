@class NSString, NSURL, CalStoreRemoteManagedObject;

@interface CalGroup : NSObject <NSCopying> {
    NSString *_managedObjectIDString;
    void *_reserved;
}

@property (copy) NSString *title;
@property (readonly) NSString *type;
@property (readonly) NSString *uid;
@property (copy) NSURL *serverURL;
@property (copy) NSURL *externalServerURL;
@property (copy) NSString *emailAddress;
@property (copy) NSString *fullName;
@property (readonly) CalStoreRemoteManagedObject *managedObject;
@property (readonly, nonatomic) BOOL localMigrationIsInProgress;
@property (retain, nonatomic) NSString *managedObjectIDString;

+ (id)group;
+ (id)_convertURLFromManagedServerURL:(id)a0 withLogin:(id)a1;
+ (id)_loginFromURL:(id)a0;
+ (id)groupWithType:(id)a0;
+ (id)groupFromRemoteManagedObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)password;
- (void)setPassword:(id)a0;
- (void)_setPassword:(id)a0;
- (id)initWithUID:(id)a0 type:(id)a1;
- (BOOL)isDelegate;
- (id)acAccountID;
- (void)setAcAccountID:(id)a0;
- (BOOL)isEnabledForCalendar;
- (void)setIsEnabledForCalendar:(BOOL)a0;
- (BOOL)isEnabledForReminders;
- (void)setIsEnabledForReminders:(BOOL)a0;
- (void)setIsDelegate:(BOOL)a0;
- (void)_setIsMarkedForDeletion:(BOOL)a0;
- (id)principalURL;
- (BOOL)useKerberos;
- (void)setUseKerberos:(BOOL)a0;
- (void)_setPrincipalURL:(id)a0;
- (void)setExchangeRootFolderID:(id)a0;
- (id)exchangeRootFolderID;
- (BOOL)_isMarkedForDeletion;
- (BOOL)isManuallyConfigured;
- (void)setIsManuallyConfigured:(BOOL)a0;
- (id)exchangeAutodiscoverURL;
- (void)setExchangeAutodiscoverURL:(id)a0;
- (BOOL)isValidIAGroup;
- (id)remoteManagedGroupFromGroup;

@end
