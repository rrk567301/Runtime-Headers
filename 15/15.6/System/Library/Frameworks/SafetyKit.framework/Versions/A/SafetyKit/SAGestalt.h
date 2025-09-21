@interface SAGestalt : NSObject

@property (class, readonly, nonatomic) char inAirplaneMode;
@property (class, readonly, nonatomic) char deviceSupportsKappa;
@property (class, readonly, nonatomic) char isProductionFused;
@property (class, readonly, nonatomic) char isInternalBuild;

@end
