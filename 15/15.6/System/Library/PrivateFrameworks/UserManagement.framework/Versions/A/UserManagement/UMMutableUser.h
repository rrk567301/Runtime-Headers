@class NSString, NSArray, NSURL, NSDate, NSError;

@interface UMMutableUser : UMUser

@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSURL *homeDirectoryURL;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *photoURL;
@property (copy, nonatomic) NSString *userAuxiliaryString;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *lastLoginDate;
@property (copy, nonatomic) NSDate *lastRemoteAuthDate;
@property (nonatomic) unsigned long long passcodeType;
@property (nonatomic) char isLoginUser;
@property (nonatomic) char isAuditor;
@property (nonatomic) char isDisabled;
@property (nonatomic) char isTransientUser;
@property (nonatomic) char isPrimaryUser;
@property (nonatomic) char isAdminUser;
@property (nonatomic) unsigned long long passcodeLockGracePeriod;
@property (copy, nonatomic) NSArray *languages;
@property (nonatomic) char hasManagedCredentials;
@property (nonatomic) unsigned long long dataQuota;
@property (nonatomic) unsigned long long dataUsed;
@property (nonatomic) char hasDataToSync;
@property (retain, nonatomic) NSError *errorCausingLogout;

- (char)commitChanges;
- (char)commitChangesWithError:(id *)a0;

@end
