@class NSDictionary;

@interface WFFontDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)descriptorWithSerializedRepresentation:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)family;
- (void).cxx_destruct;
- (id)name;
- (id)displayName;
- (id)serializedRepresentation;
- (id)fontWithSize:(double)a0;
- (id)initWithFontAttributes:(id)a0;
- (id)visibleName;
- (id)face;
- (id)initWithPrivateRepresentation:(id)a0;

@end
