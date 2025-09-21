@class NSString, NSDictionary, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTCoreAnalyticsMetric, CUTRTCMetric, CUTAWDMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) int accountType;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) char doesExist;
@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) char isUserDisabled;
@property (readonly, nonatomic) char doesMatchiCloudAccount;
@property (readonly, nonatomic) char isiCloudSignedIn;
@property (readonly, nonatomic) char isiTunesSignedIn;
@property (readonly, nonatomic) long long registrationError;
@property (readonly, nonatomic) int registrationErrorReason;
@property (readonly, nonatomic) long long registrationStatus;
@property (readonly, nonatomic) int accountRegistrationStatus;
@property (readonly, nonatomic) long long lastRegistrationFailureError;
@property (readonly, nonatomic) char hasEverRegistered;
@property (readonly, nonatomic) double timeIntervalSinceLastRegistrationFailure;
@property (readonly, nonatomic) double timeIntervalSinceLastRegistrationSuccess;
@property (readonly, nonatomic) long long accountSecurityLevel;
@property (readonly, nonatomic) char areAllAliasesSelected;
@property (readonly, nonatomic) char areAllSelectedAliasesRegistered;
@property (readonly, nonatomic) char isProdEnvironment;
@property (readonly, nonatomic) long long numberOfSelected;
@property (readonly, nonatomic) long long numberOfVetted;
@property (readonly, nonatomic) long long numberOfUnselectReasonUnknown;
@property (readonly, nonatomic) long long numberOfUnselectReasonAlertDenial;
@property (readonly, nonatomic) long long numberOfUnselectReasonClientCall;
@property (readonly, nonatomic) long long numberOfUnselectReasonBadAlias;
@property (readonly, nonatomic) long long numberOfUnselectReasonUpdateInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;

- (void).cxx_destruct;
- (id)initWithAccountType:(int)a0 serviceIdentifier:(id)a1 doesExist:(char)a2 isEnabled:(char)a3 isUserDisabled:(char)a4 isiCloudSignedIn:(char)a5 doesMatchiCloudAccount:(char)a6 isiTunesSignedIn:(char)a7 registrationError:(long long)a8 registrationErrorReason:(int)a9 registrationStatus:(long long)a10 accountRegistrationStatus:(int)a11 hasEverRegistered:(char)a12 lastRegistrationFailureError:(long long)a13 timeIntervalSinceLastRegistrationFailure:(double)a14 timeIntervalSinceLastRegistrationSuccess:(double)a15 accountSecurityLevel:(long long)a16 areAllAliasesSelected:(char)a17 areAllSelectedAliasesRegistered:(char)a18 numberOfSelected:(long long)a19 numberOfVetted:(long long)a20 numberOfUnselectReasonUnknown:(long long)a21 numberOfUnselectReasonAlertDenial:(long long)a22 numberOfUnselectReasonClientCall:(long long)a23 numberOfUnselectReasonBadAlias:(long long)a24 numberOfUnselectReasonUpdateInfo:(long long)a25 isProdEnvironment:(char)a26;

@end
