@interface CXSetTTYTypeCallAction : CXCallAction

@property (nonatomic) long long ttyType;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 ttyType:(long long)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
