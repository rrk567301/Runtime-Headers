@interface RWIProtocolDOMImmersiveVideoMetadata : RWIProtocolJSONObject

@property (nonatomic) long long kind;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) int horizontalFieldOfView;
@property (nonatomic) int stereoCameraBaseline;
@property (nonatomic) int horizontalDisparityAdjustment;

- (id)initWithKind:(long long)a0 width:(double)a1 height:(double)a2;

@end
