@class TSDTextureSet, TSDMagicMoveAnimationMatch;

@interface TSDMagicMoveTextureZOrdererMatch : NSObject

@property (readonly, nonatomic) TSDTextureSet *outgoingTexture;
@property (readonly, nonatomic) TSDTextureSet *incomingTexture;
@property (nonatomic) long long outgoingZIndex;
@property (nonatomic) long long incomingZIndex;
@property (readonly, nonatomic) char isOutgoingZIndexUnmatched;
@property (readonly, nonatomic) char isIncomingZIndexUnmatched;
@property (readonly, nonatomic) TSDMagicMoveAnimationMatch *animationMatch;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAnimationMatch:(id)a0;
- (double)interpolatedZIndexAtPercent:(double)a0;
- (double)intersectionPercentWithZOrdererMatch:(id)a0;
- (char)intersectsZOrdererMatch:(id)a0;
- (char)intersectsZOrdererMatch:(id)a0 withAttemptedZIndex:(long long)a1;

@end
