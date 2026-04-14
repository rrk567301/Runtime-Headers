@class NSString, NFFolder, NSArray, ACAccount, NFTrashFolder, ACAccountCredential;

@interface NFAccount : NSManagedObject <ICNoteVisibilityTesting, ICNFMCPersistedAccount>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ACAccount *internalParentACAccount;
@property (nonatomic) BOOL allowInsecureAuthentication;
@property (nonatomic) BOOL didChooseToMigrate;
@property (copy, nonatomic) NSString *emailAddress;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *parentACAccountIdentifier;
@property (retain, nonatomic) NFFolder *rootFolder;
@property (retain, nonatomic) NFTrashFolder *trashFolder;
@property (readonly, weak, nonatomic) NFFolder *defaultFolder;
@property (readonly, weak, nonatomic) NSArray *allFolders;
@property (readonly, nonatomic) long long accountClassPriority;
@property (readonly, nonatomic) BOOL isAolAccount;
@property (readonly, nonatomic) BOOL isICloudAccount;
@property (readonly, nonatomic) BOOL isYahooAccount;
@property (readonly, copy, nonatomic) NSString *internetAccountsUID;
@property (readonly, nonatomic) ACAccount *parentACAccount;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *canonicalEmailAddress;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) ACAccountCredential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultAccount:(id)a0;
+ (id)sharedAccountStore;
+ (id)accountWithEmailAddress:(id)a0 inManagedObjectContext:(id)a1;
+ (id)accountWithParentACAccountIdentifier:(id)a0 inManagedObjectContext:(id)a1;
+ (id)allEnabledAccountsWithContext:(id)a0;
+ (id)defaultAccountWithContext:(id)a0;
+ (id)_initialDefaultAccountWithContext:(id)a0;
+ (id)accountWithInternetAccountsUID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)allAccountsWithContext:(id)a0;
+ (id)findAccountForParentACAccount:(id)a0 inManagedObjectContext:(id)a1;
+ (id)keyPathsForValuesAffectingAccountDescription;
+ (id)keyPathsForValuesAffectingDefaultFolder;
+ (id)keyPathsForValuesAffectingParentACAccount;
+ (id)resetDefaultAccount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)emailAddress;
- (id)username;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (id)accountDescription;
- (BOOL)hasNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (void)accountsFrameworkDidChange:(id)a0;
- (id)createDefaultFolderInContext:(id)a0;
- (id)folderEntityName;
- (BOOL)participatesInInternetAccounts;

@end
