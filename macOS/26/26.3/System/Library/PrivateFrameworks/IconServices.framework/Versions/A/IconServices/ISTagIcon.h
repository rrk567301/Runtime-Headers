@class NSString;

@interface ISTagIcon : ISBindableIcon

@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;
@property (readonly) NSString *baseType;

+ (BOOL)supportsSecureCoding;

- (id)_fallbackKey;
- (id)makeResourceProvider;
- (id)description;
- (id)initWithFileExtension:(id)a0 baseType:(id)a1;
- (void).cxx_destruct;
- (id)initWithModelCode:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeCode:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTag:(id)a0 tagClass:(id)a1 baseType:(id)a2;
- (id)initWithFileExtension:(id)a0;
- (id)initWithMIMEType:(id)a0;

@end
