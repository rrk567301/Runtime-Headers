@class NSString, NSArray, NSURL, NSDate, NSError;

@interface UMUser : NSObject <NSCopying, NSMutableCopying> {
    NSString *_displayName;
}

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
@property (copy, nonatomic) id _photo;
@property (nonatomic) unsigned long long passcodeType;
@property (nonatomic) char shouldFetchAttributes;
@property (copy, nonatomic) NSDate *firstLoginStartDate;
@property (copy, nonatomic) NSDate *firstLoginEndDate;
@property (copy, nonatomic) NSDate *lastCachedLoginStartDate;
@property (copy, nonatomic) NSDate *lastCachedLoginEndDate;
@property (copy, nonatomic) NSDate *lastLogoutStartDate;
@property (copy, nonatomic) NSDate *lastLogoutEndDate;
@property (copy, nonatomic) NSError *debugErrorCausingLogout;
@property (readonly, weak, nonatomic) NSArray *allUserPersonas;
@property (readonly, nonatomic) unsigned long long userType;
@property (readonly, nonatomic) double passcodeBackOffInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)commitChanges;
- (char)commitChangesWithError:(id *)a0;
- (char)inFirstLoginSession;
- (char)isEqualToUser:(id)a0;
- (void)refetchUser;
- (id)userPersonaFromIdentityString:(id)a0;

@end
