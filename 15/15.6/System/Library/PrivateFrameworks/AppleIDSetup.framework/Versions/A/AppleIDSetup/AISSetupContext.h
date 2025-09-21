@class NSString, NSSet, CUMessageSession, CBDevice, AISSetupContextCandidateAccount;

@interface AISSetupContext : NSObject

@property (copy, nonatomic) NSString *fixedPIN;
@property (copy, nonatomic) NSString *targetAuthTag;
@property (nonatomic) int pinType;
@property (nonatomic) unsigned long long deviceUserKind;
@property (nonatomic) char shouldCreateDeviceUser;
@property (retain, nonatomic) NSSet *requiredServiceTypes;
@property (retain, nonatomic) NSSet *desiredServiceTypes;
@property (nonatomic) char shouldBackgroundDesiredServices;
@property (retain, nonatomic) CUMessageSession *messageSessionTemplate;
@property (retain, nonatomic) CBDevice *bleDevice;
@property (nonatomic) unsigned long long localRole;
@property (nonatomic) unsigned long long remoteRole;
@property (nonatomic) char shouldSkipConfirmation;
@property (retain, nonatomic) AISSetupContextCandidateAccount *candidateAccount;
@property (nonatomic) char supportsSplitAccounts;
@property (nonatomic) char isPreEstablishedClient;
@property (copy, nonatomic) NSString *serverDeviceModel;
@property (retain, nonatomic) NSString *localSecret;
@property (nonatomic) unsigned long long localSecretType;

- (id)init;
- (void).cxx_destruct;

@end
