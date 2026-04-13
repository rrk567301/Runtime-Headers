@class NSURL, NSData;

@interface _INURLImage : INImage {
    NSData *_sandboxExtensionData;
}

@property (readonly, copy, nonatomic) NSURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_identifier;
- (id)_uri;
- (id)_dictionaryRepresentation;
- (id)initWithImageURL:(id)a0;
- (BOOL)_requiresRetrieval;
- (id)_copyWithSubclass:(Class)a0;
- (BOOL)_isEligibleForProxying;
- (void)_setUri:(id)a0;
- (id)_initWithURLRepresentation:(id)a0;
- (BOOL)_isSupportedForDonation;
- (id)_sandboxExtensionData;
- (void)_setSandboxExtensionData:(id)a0;
- (id)_URLRepresentation;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;

@end
