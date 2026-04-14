@class PIPPrerollAttributes;

@interface PIPMutablePlaybackState : PIPPlaybackState

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double contentDuration;
@property (nonatomic) long long contentType;
@property (nonatomic) BOOL muted;
@property (nonatomic, retain) PIPPrerollAttributes *prerollAttributes;
@property (nonatomic) BOOL requiresLinearPlayback;

- (id)init;
- (BOOL)isMuted;
- (id)initWithCoder:(id)a0;
- (void)setPlaybackRate:(double)a0 elapsedTime:(double)a1 timeControlStatus:(long long)a2;

@end
