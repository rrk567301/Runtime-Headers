@interface AVPlayerSetRateOptions : NSObject <NSCopying>

@property (nonatomic) BOOL preferCoordinatedPlaybackBehavior;
@property (nonatomic) BOOL overrideAutowaitRestriction;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
