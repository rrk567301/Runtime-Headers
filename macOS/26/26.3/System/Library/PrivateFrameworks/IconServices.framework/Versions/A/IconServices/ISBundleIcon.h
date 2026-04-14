@class NSURL, NSString;

@interface ISBundleIcon : ISConcreteIcon

@property (readonly) NSURL *url;
@property (readonly) NSString *type;
@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)description;
- (double)_aspectRatio;
- (id)initWithBundleURL:(id)a0 fileExtension:(id)a1;
- (id)initWithBundleURL:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_makeAppResourceProvider;
- (id)_makeDocumentResourceProvider;
- (id)_makeFrameworkResourceProvider;
- (id)_makeUnregisteredPersonalityResourceProvider;
- (id)initWithBundleURL:(id)a0;
- (id)initWithBundleURL:(id)a0 type:(id)a1 tag:(id)a2 tagClass:(id)a3;

@end
