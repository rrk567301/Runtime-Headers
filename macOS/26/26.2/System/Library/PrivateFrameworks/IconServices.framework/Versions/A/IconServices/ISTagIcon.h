@class NSString;

@interface ISTagIcon : ISBindableIcon

@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;
@property (readonly) NSString *baseType;

+ (BOOL)supportsSecureCoding;

- (id)initWithTypeCode:(unsigned int)a0;
- (id)makeResourceProvider;
- (id)initWithMIMEType:(id)a0;
- (id)_fallbackKey;
- (id)initWithFileExtension:(id)a0;
- (id)initWithModelCode:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTag:(id)a0 tagClass:(id)a1 baseType:(id)a2;
- (id)description;
- (id)initWithFileExtension:(id)a0 baseType:(id)a1;

@end
