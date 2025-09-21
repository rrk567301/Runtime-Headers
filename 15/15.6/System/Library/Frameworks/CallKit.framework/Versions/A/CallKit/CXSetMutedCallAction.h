@interface CXSetMutedCallAction : CXCallAction

@property (nonatomic, getter=isBottomUpMute) char bottomUpMute;
@property (nonatomic, getter=isSystemInitiated) char systemInitiated;
@property (nonatomic, getter=isMuted) char muted;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCallUUID:(id)a0 muted:(char)a1;
- (id)initWithCallUUID:(id)a0 muted:(char)a1 bottomUpMute:(char)a2;
- (id)initWithCallUUID:(id)a0 muted:(char)a1 systemInitiated:(char)a2;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
