@class WBSPasswordEvaluation, NSString, WBSSavedAccount, NSArray;

@interface WBSPasswordWarning : NSObject {
    WBSPasswordEvaluation *_weakPasswordEvaluation;
    NSArray *_titlesOfSavedAccountsWithReusedPassword;
    NSString *_user;
    NSString *_password;
    NSString *_highLevelDomain;
}

@property (nonatomic) unsigned long long severityScore;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) unsigned long long issueTypes;
@property (readonly, nonatomic) char savedAccountIsOnlySavedAccountForHighLevelDomain;
@property (readonly, nonatomic) unsigned long long severity;
@property (readonly, nonatomic) unsigned long long hashForUserAcknowlegement;
@property (readonly, nonatomic) char shouldShowWarningsWhenLoggingIn;
@property (readonly, nonatomic) char hasBeenHidden;
@property (readonly, nonatomic) NSString *localizedShortDescriptivePhrase;
@property (readonly, nonatomic) NSString *localizedShortDescriptionOfProblemType;
@property (readonly, nonatomic) NSString *localizedHeadline;
@property (readonly, nonatomic) NSString *localizedBody;
@property (readonly, nonatomic) NSString *localizedInformationTextForWarningWhenLoggingIn;
@property (readonly, nonatomic) NSString *localizedAlertWarningForSharingReusedPassword;
@property (readonly, nonatomic) char hasBeenCompromised;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)_addFormerlySharedWarningStringToWarningStrings:(id)a0;
- (void)_addReusedWarningStringToWarningStrings:(id)a0;
- (id)_localizedLongWarningStringsForClient:(unsigned long long)a0;
- (id)_localizedShortDescriptionOfMultipleIssuesWithFullDescriptivePhrase:(char)a0;
- (id)_localizedShortDescriptionOfSingleIssueWithFullDescriptivePhrase:(char)a0;
- (id)_localizedShortDescriptionWithFullDescriptivePhrase:(char)a0 shouldDescribeMultipleIssues:(char)a1;
- (unsigned long long)_passwordVisibilityForClient:(unsigned long long)a0;
- (id)initWithSavedAccount:(id)a0 issueTypes:(unsigned long long)a1 weakPasswordEvaluation:(id)a2 titlesOfSavedAccountsWithReusedPassword:(id)a3 savedAccountIsOnlySavedAccountForHighLevelDomain:(char)a4;
- (id)localizedLongDescriptionForClient:(unsigned long long)a0;

@end
