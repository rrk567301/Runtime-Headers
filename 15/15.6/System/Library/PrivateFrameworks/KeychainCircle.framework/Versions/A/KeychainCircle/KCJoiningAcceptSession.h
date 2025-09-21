@class NSData, OTControl, NSString, OTControlArguments, KCAESGCMDuplexSession, OTJoiningConfiguration, NSMutableDictionary, KCSRPServerContext;
@protocol KCJoiningAcceptCircleDelegate, KCJoiningAcceptSecretDelegate;

@interface KCJoiningAcceptSession : NSObject

@property (readonly) unsigned long long dsid;
@property (weak) id<KCJoiningAcceptSecretDelegate> secretDelegate;
@property (weak) id<KCJoiningAcceptCircleDelegate> circleDelegate;
@property (readonly) KCSRPServerContext *context;
@property (readonly) KCAESGCMDuplexSession *session;
@property (readonly) int state;
@property (retain) NSData *startMessage;
@property (retain) NSString *piggy_uuid;
@property int piggy_version;
@property (retain) NSData *octagon;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (retain, nonatomic) OTControlArguments *controlArguments;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) NSMutableDictionary *defaults;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *flowID;
@property (retain, nonatomic) NSString *deviceSessionID;
@property (nonatomic) unsigned long long piggybacking_version_for_tests;

+ (id)sessionWithInitialMessage:(id)a0 secretDelegate:(id)a1 circleDelegate:(id)a2 dsid:(unsigned long long)a3 altDSID:(id)a4 flowID:(id)a5 deviceSessionID:(id)a6 error:(id *)a7;
+ (id)sessionWithInitialMessage:(id)a0 secretDelegate:(id)a1 circleDelegate:(id)a2 dsid:(unsigned long long)a3 error:(id *)a4;

- (id)description;
- (void).cxx_destruct;
- (void)setConfiguration:(id)a0;
- (id)stateString;
- (BOOL)isDone;
- (id)accessSession;
- (id)copyChallengeMessage:(id *)a0;
- (id)createPairingMessageFromJoiningMessage:(id)a0 error:(id *)a1;
- (id)createTLKRequestResponse:(id *)a0;
- (id)initWithSecretDelegate:(id)a0 circleDelegate:(id)a1 dsid:(unsigned long long)a2 altDSID:(id)a3 flowID:(id)a4 deviceSessionID:(id)a5 rng:(struct ccrng_state { void /* function */ *x0; } *)a6 error:(id *)a7;
- (id)processApplication:(id)a0 error:(id *)a1;
- (id)processInitialMessage:(id)a0 error:(id *)a1;
- (id)processMessage:(id)a0 error:(id *)a1;
- (id)processResponse:(id)a0 error:(id *)a1;
- (id)processSOSApplication:(id)a0 error:(id *)a1;
- (void)setControlObject:(id)a0;
- (void)setPiggybackingVersion:(unsigned long long)a0;
- (void)setSessionControlArguments:(id)a0;
- (BOOL)setupSession:(id *)a0;
- (char)shouldAcceptOctagonRequests;
- (char)shouldProcessSOSApplication:(id)a0 pairingMessage:(id)a1;

@end
