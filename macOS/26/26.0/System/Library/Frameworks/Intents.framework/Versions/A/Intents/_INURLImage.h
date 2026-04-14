@class NSURL, NSData;

@interface _INURLImage : INImage {
    NSData *_sandboxExtensionData;
}

@property (readonly, copy, nonatomic) NSURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (BOOL)_requiresRetrieval;
- (id)_identifier;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEligibleForProxying;
- (id)_dictionaryRepresentation;
- (id)_copyWithSubclass:(Class)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_uri;
- (id)initWithImageURL:(id)a0;
- (id)_URLRepresentation;
- (id)_initWithURLRepresentation:(id)a0;
- (BOOL)_isSupportedForDonation;
- (id)_sandboxExtensionData;
- (void)_setSandboxExtensionData:(id)a0;
- (void)_setUri:(id)a0;

@end
