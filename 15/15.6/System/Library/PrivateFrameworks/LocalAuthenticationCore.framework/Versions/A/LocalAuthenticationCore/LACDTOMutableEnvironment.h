@class LACDTOLostModeState, NSString, LACDTOBiometryWatchdogPack, LACDTOLocationState, LACDTORatchetState, LACDTOGracePeriodState;
@protocol LACDTOFeatureState;

@interface LACDTOMutableEnvironment : NSObject <LACDTOEnvironment>

@property (nonatomic, getter=isConfirmed) char confirmed;
@property (retain, nonatomic) LACDTOBiometryWatchdogPack *biometryWatchdogPack;
@property (retain, nonatomic) id<LACDTOFeatureState> featureState;
@property (retain, nonatomic) LACDTOLocationState *locationState;
@property (retain, nonatomic) LACDTOLostModeState *lostModeState;
@property (retain, nonatomic) LACDTORatchetState *ratchetState;
@property (retain, nonatomic) LACDTOGracePeriodState *gracePeriodState;
@property (readonly, nonatomic) char inFamiliarLocation;
@property (readonly, nonatomic) char isDTOEnabled;
@property (readonly, nonatomic) char hasExpiredBiometry;
@property (readonly, nonatomic) char allowsAuthenticationFallbacks;
@property (readonly, nonatomic) char allowsGracePeriodUI;
@property (readonly, nonatomic) char isGracePeriodActive;
@property (readonly, nonatomic) char isStrictModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_isBiometryUsable;
- (char)isDTOActive;

@end
