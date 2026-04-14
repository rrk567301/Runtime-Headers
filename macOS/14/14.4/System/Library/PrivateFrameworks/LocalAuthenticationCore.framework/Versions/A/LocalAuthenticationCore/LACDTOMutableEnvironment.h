@class NSString, LACDTOBiometryWatchdogPack, LACDTORatchetState;
@protocol LACDTOFeatureState;

@interface LACDTOMutableEnvironment : NSObject <LACDTOEnvironment>

@property (nonatomic) BOOL inFamiliarLocation;
@property (retain, nonatomic) id<LACDTOFeatureState> featureState;
@property (retain, nonatomic) LACDTORatchetState *ratchetState;
@property (retain, nonatomic) LACDTOBiometryWatchdogPack *biometryWatchdogPack;
@property (readonly, nonatomic) BOOL isDTOEnabled;
@property (readonly, nonatomic) BOOL hasExpiredBiometry;
@property (readonly, nonatomic) BOOL allowsAuthenticationFallbacks;
@property (readonly, nonatomic) BOOL isStrictModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
