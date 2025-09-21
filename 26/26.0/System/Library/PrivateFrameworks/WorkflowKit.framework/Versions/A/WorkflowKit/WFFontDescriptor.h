@class NSDictionary;

@interface WFFontDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)descriptorWithSerializedRepresentation:(id)a0;

- (id)family;
- (id)serializedRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)fontWithSize:(double)a0;
- (id)initWithFontAttributes:(id)a0;
- (id)visibleName;
- (id)face;
- (id)initWithPrivateRepresentation:(id)a0;

@end
