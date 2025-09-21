@interface CSEnhancedEndpointerResult : NSObject

@property (nonatomic) char didDefaultEndpointerFire;
@property (nonatomic) char didRelaxedEndpointerFire;
@property (nonatomic) float endpointPosterior;
@property (nonatomic) int extraDelayMs;
@property (nonatomic) char speechArrivalDetected;
@property (nonatomic) char didForceEndpoint;
@property (nonatomic) float partialScore;
@property (nonatomic) float rcScore;
@property (nonatomic) long long endpointerType;

- (char)didEndpointerFire;

@end
