@protocol VNObservationsRecipient;

@interface VNCoreSceneUnderstandingDetectorFeatureConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) id<VNObservationsRecipient> observationsRecipient;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithObservationsRecipient:(id)a0;

@end
