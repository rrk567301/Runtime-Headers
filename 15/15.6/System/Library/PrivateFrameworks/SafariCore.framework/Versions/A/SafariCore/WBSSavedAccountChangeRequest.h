@class NSString, WBSSavedAccount, NSArray, NSMutableArray, WBSTOTPGenerator;

@interface WBSSavedAccountChangeRequest : NSObject

@property (retain, nonatomic) WBSSavedAccount *savedAccount;
@property (copy, nonatomic) NSString *user;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSMutableArray *sites;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (copy, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSArray *userVisibleSites;
@property (retain, nonatomic) NSArray *additionalSites;
@property (readonly, nonatomic) char hasChanges;
@property (readonly, nonatomic) char hasUserChange;
@property (readonly, nonatomic) char hasPasswordChange;
@property (readonly, nonatomic) char hasTOTPGeneratorChange;
@property (readonly, nonatomic) char hasNotesEntryChange;
@property (readonly, nonatomic) char hasCustomTitleChange;
@property (readonly, nonatomic) char hasAdditionalSitesChange;
@property (readonly, nonatomic) char isAddingPasswordToAccountWithPasskey;

- (void).cxx_destruct;
- (char)hasSitesChange;

@end
