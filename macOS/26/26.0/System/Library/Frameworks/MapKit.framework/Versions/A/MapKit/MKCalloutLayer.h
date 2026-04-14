@class CALayer;

@interface MKCalloutLayer : CALayer

@property (retain, nonatomic) CALayer *layerA;
@property (retain, nonatomic) CALayer *layerB;
@property (nonatomic) long long anchorPosition;
@property (readonly, nonatomic) long long contentMode;

+ (id)layerWithContentMode:(long long)a0;

- (void)layoutSublayers;
- (void)setContentMode:(long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)imageNameWithPartFragment:(id)a0;
- (void)updateSublayerContent:(BOOL)a0;

@end
