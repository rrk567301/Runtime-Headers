@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (id)_copyWithSubclass:(Class)a0;
- (id)_dictionaryRepresentation;
- (id)stringRepresentation;
- (id)_identifier;
- (id)_name;
- (void)_setName:(id)a0;
- (BOOL)_requiresRetrieval;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStringRepresentation:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)_setBundleIdentifier:(id)a0;
- (BOOL)_isSystem;
- (id)_bundleIdentifier;
- (void)_setBundlePath:(id)a0;
- (id)_URLRepresentation;
- (id)_bundlePath;
- (id)_initWithURLRepresentation:(id)a0;

@end
