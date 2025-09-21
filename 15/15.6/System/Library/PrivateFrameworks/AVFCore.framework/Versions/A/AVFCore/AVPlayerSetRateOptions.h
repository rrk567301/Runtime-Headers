@interface AVPlayerSetRateOptions : NSObject <NSCopying>

@property (nonatomic) char preferCoordinatedPlaybackBehavior;
@property (nonatomic) char overrideAutowaitRestriction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;

@end
