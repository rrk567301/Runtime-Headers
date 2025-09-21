@class NSURL, FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings {
    FPItemID *_enumeratedItemID;
}

@property (copy, nonatomic) NSURL *enumeratedURL;
@property (copy, nonatomic) FPItemID *nullableEnumeratedItemID;
@property (copy, nonatomic) FPItemID *enumeratedItemID;
@property (nonatomic, getter=isPresenterEnumeration) char presenterEnumeration;
@property (nonatomic) char wantsDirectExtensionEnumeration;
@property (nonatomic) char requireSandboxAccess;
@property (nonatomic, getter=isUnbounded) char unbounded;
@property (nonatomic) char buildAndFilterAppLibraries;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nullableEnumeratedItemID;
- (void)setNullableEnumeratedItemID:(id)a0;

@end
