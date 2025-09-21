@interface CXEnableVideoCallAction : CXCallAction <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isVideoEnabled) char videoEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 videoEnabled:(char)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
