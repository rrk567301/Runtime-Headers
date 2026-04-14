@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_name;
- (id)initWithStringRepresentation:(id)a0;
- (id)stringRepresentation;
- (void)_setName:(id)a0;
- (BOOL)_requiresRetrieval;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_copyWithSubclass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setBundleIdentifier:(id)a0;
- (BOOL)_isSystem;
- (id)_bundleIdentifier;
- (void)_setBundlePath:(id)a0;
- (id)_URLRepresentation;
- (id)_bundlePath;
- (id)_initWithURLRepresentation:(id)a0;

@end
