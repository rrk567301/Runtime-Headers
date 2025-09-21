@interface CXSetScreeningCallAction : CXCallAction

@property (nonatomic, getter=isScreening) char screening;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 screening:(char)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
