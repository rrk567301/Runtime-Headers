@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (id)stringRepresentation;
- (BOOL)_requiresRetrieval;
- (id)_identifier;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)_setName:(id)a0;
- (id)_name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStringRepresentation:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_copyWithSubclass:(Class)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setBundleIdentifier:(id)a0;
- (BOOL)_isSystem;
- (id)_bundleIdentifier;
- (void)_setBundlePath:(id)a0;
- (id)_URLRepresentation;
- (id)_bundlePath;
- (id)_initWithURLRepresentation:(id)a0;

@end
