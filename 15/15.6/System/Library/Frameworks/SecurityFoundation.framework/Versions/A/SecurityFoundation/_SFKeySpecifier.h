@interface _SFKeySpecifier : NSObject <NSCopying, NSSecureCoding> {
    id _keySpecifierInternal;
}

@property (class, readonly) Class keyClass;
@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
