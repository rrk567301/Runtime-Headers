@interface AVPlayerSetRateOptions : NSObject <NSCopying>

@property (nonatomic) BOOL preferCoordinatedPlaybackBehavior;
@property (nonatomic) BOOL overrideAutowaitRestriction;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
