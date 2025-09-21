@class NSString, OTControl, CKKSControl;

@interface OTConfigurationContext : NSObject

@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *authenticationAppleID;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (nonatomic) char overrideEscrowCache;
@property (nonatomic) long long escrowFetchSource;
@property (nonatomic) char octagonCapableRecordsExist;
@property (nonatomic) char overrideForSetupAccountScript;
@property (nonatomic) char overrideForJoinAfterRestore;
@property (nonatomic) char isGuitarfish;
@property (copy, nonatomic) NSString *flowID;
@property (copy, nonatomic) NSString *deviceSessionID;
@property (retain) OTControl *otControl;
@property (retain) CKKSControl *ckksControl;
@property (retain) id sbd;
@property (nonatomic) char testsEnabled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)makeCKKSControl:(id *)a0;
- (id)makeOTControl:(id *)a0;

@end
