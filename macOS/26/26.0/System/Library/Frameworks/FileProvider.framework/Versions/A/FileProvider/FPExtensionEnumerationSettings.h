@class NSURL, FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings {
    FPItemID *_enumeratedItemID;
}

@property (copy, nonatomic) NSURL *enumeratedURL;
@property (copy, nonatomic) FPItemID *nullableEnumeratedItemID;
@property (copy, nonatomic) FPItemID *enumeratedItemID;
@property (nonatomic, getter=isPresenterEnumeration) BOOL presenterEnumeration;
@property (nonatomic) BOOL wantsDirectExtensionEnumeration;
@property (nonatomic) BOOL requireSandboxAccess;
@property (nonatomic, getter=isUnbounded) BOOL unbounded;
@property (nonatomic) BOOL buildAndFilterAppLibraries;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setNullableEnumeratedItemID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)nullableEnumeratedItemID;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
