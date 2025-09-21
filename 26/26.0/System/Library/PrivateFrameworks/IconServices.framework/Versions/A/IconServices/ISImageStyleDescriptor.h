@class IFColor, NSUUID;

@interface ISImageStyleDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL templateVariant;
@property (nonatomic) BOOL selectedVariant;
@property (retain, nonatomic) IFColor *tintColor;
@property (readonly) NSUUID *digest;

+ (id)defaultStyleDescriptor;

- (id)digest;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
