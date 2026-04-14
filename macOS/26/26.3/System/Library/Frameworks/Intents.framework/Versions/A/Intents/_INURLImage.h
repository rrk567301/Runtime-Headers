@class NSURL, NSData;

@interface _INURLImage : INImage {
    NSData *_sandboxExtensionData;
}

@property (readonly, copy, nonatomic) NSURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_identifier;
- (BOOL)_isEligibleForProxying;
- (BOOL)_requiresRetrieval;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_copyWithSubclass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_uri;
- (id)initWithImageURL:(id)a0;
- (id)_URLRepresentation;
- (id)_initWithURLRepresentation:(id)a0;
- (BOOL)_isSupportedForDonation;
- (id)_sandboxExtensionData;
- (void)_setSandboxExtensionData:(id)a0;
- (void)_setUri:(id)a0;
- (BOOL)_validateFileURLAccess:(id)a0 accessSpecifier:(id)a1 error:(id *)a2;
- (BOOL)_validateFileURLAccess:(id)a0 error:(id *)a1;

@end
