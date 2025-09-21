@class NSString, OTEscrowAuthenticationInformation, OTControl, CKKSControl;

@interface OTConfigurationContext : NSObject

@property (copy, nonatomic) OTEscrowAuthenticationInformation *escrowAuth;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *authenticationAppleID;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (nonatomic) BOOL overrideEscrowCache;
@property (nonatomic) long long escrowFetchSource;
@property (nonatomic) BOOL octagonCapableRecordsExist;
@property (nonatomic) BOOL overrideForSetupAccountScript;
@property (nonatomic) BOOL overrideForJoinAfterRestore;
@property (nonatomic) BOOL isGuitarfish;
@property (copy, nonatomic) NSString *flowID;
@property (copy, nonatomic) NSString *deviceSessionID;
@property (nonatomic) BOOL canSendMetrics;
@property (retain) OTControl *otControl;
@property (retain) CKKSControl *ckksControl;
@property (retain) id sbd;
@property (nonatomic) BOOL testsEnabled;

- (id)escrowAuth;
- (void)setEscrowAuth:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)makeCKKSControl:(id *)a0;
- (id)makeOTControl:(id *)a0;

@end
