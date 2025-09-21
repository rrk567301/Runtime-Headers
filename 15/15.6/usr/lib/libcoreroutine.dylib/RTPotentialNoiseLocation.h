@class RTLocation;

@interface RTPotentialNoiseLocation : NSObject

@property (readonly, nonatomic) RTLocation *location;
@property (nonatomic, setter=setNoise:) char isNoise;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0;

@end
