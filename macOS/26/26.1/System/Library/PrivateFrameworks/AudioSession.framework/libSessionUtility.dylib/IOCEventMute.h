@interface IOCEventMute : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int muteDirection;
@property (nonatomic) BOOL muted;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInputMuteState:(BOOL)a0 fadeDuration:(unsigned int)a1;
- (id)initWithOutputMuteState:(BOOL)a0 fadeDuration:(unsigned int)a1;

@end
