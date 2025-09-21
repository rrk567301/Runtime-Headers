@interface CXSetHeldCallAction : CXCallAction

@property (nonatomic, getter=isOnHold) char onHold;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCallUUID:(id)a0 onHold:(char)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
