@class CKRecordID, NSString, NSDictionary, CLSPerson, NSURL, NSError, NSData;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {
    char _hasSecurityScopedSchoolworkUbiquitousContainerURL;
    char _hasSecurityScopedMultimediaCacheDirectoryURL;
}

@property (class, readonly, nonatomic) NSString *magicValue;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int devMode;
@property (retain, nonatomic) CLSPerson *person;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountPersonaUniqueIdentifier;
@property (copy, nonatomic) NSString *clientPersonaUniqueIdentifier;
@property (nonatomic) char hasDataSeparatedAccount;
@property (nonatomic) char requiresPersonaMatch;
@property (nonatomic) char hasMatchingPersona;
@property (nonatomic) unsigned long long roles;
@property (retain, nonatomic) NSDictionary *locationIDsByAXMRoleType;
@property (nonatomic) char hasManagedAccount;
@property (nonatomic) char hasEDUAccount;
@property (copy, nonatomic) NSString *organizationName;
@property (nonatomic) char organizationProgressTrackingAllowed;
@property (nonatomic) char organizationMaidAnalyticsEnabled;
@property (nonatomic) char personMaidAnalyticsEnabled;
@property (nonatomic) long long catalogEnvironment;
@property (nonatomic) int rosterServiceAuthenticationState;
@property (nonatomic) int handoutServiceAuthenticationState;
@property (nonatomic) int iCloudDriveAuthenticationState;
@property (nonatomic) char hasUbiquityEnabled;
@property (copy, nonatomic) NSURL *schoolworkUbiquitousContainerURL;
@property (copy, nonatomic) NSError *schoolworkUbiquitousContainerError;
@property (copy, nonatomic) NSData *schoolworkUbiquitousContainerURLSandboxExtension;
@property (retain, nonatomic) CKRecordID *orgAdminUserRecordID;
@property (copy, nonatomic) NSError *orgAdminUserFetchError;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (copy, nonatomic) NSError *userFetchError;
@property (copy, nonatomic) NSURL *multimediaCacheDirectoryURL;
@property (copy, nonatomic) NSError *multimediaCacheDirectoryURLError;
@property (copy, nonatomic) NSData *multimediaCacheDirectoryURLSandboxExtension;
@property (nonatomic) char allowSharingOutsideOrg;
@property (nonatomic) char classroomClassicAdHocModeEnabled;
@property (readonly, copy, nonatomic) NSString *personaUniqueString;
@property (readonly, copy, nonatomic) NSString *clientPersonaUniqueString;
@property (readonly, nonatomic) char isAdministrator;
@property (readonly, nonatomic) char isInstructor;
@property (readonly, nonatomic) char isStudent;

+ (unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (char)_hasRole:(unsigned long long)a0;
- (unsigned long long)_useRoles;
- (char)hasRole:(unsigned long long)a0;

@end
