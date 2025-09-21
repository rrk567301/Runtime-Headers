@interface CXSetRelayingCallAction : CXCallAction

@property (nonatomic, getter=isRelaying) char relaying;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 relaying:(char)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
