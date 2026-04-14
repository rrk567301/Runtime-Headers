@interface CXSetHeldCallAction : CXCallAction

@property (nonatomic, getter=isOnHold) BOOL onHold;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCallUUID:(id)a0 onHold:(BOOL)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
