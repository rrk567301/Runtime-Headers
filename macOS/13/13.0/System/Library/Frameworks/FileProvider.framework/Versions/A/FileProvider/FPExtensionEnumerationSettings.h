@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings

@property (copy, nonatomic) FPItemID *enumeratedItemID;
@property (nonatomic, getter=isPresenterEnumeration) BOOL presenterEnumeration;
@property (nonatomic) BOOL wantsDirectExtensionEnumeration;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
