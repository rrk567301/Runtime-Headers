@class NSArray, DIURL, DIBaseParams, NSString, DITemporaryPassphrase;

@interface DIConvertParams : DIBaseParams

@property (copy, nonatomic) DIURL *outputURL;
@property (retain, nonatomic) DIBaseParams *outputParams;
@property (nonatomic) unsigned long long conversionMethod;
@property (readonly, nonatomic) NSArray *shadowURLs;
@property (readonly, nonatomic) DITemporaryPassphrase *temporaryPassphrase;
@property (readonly, nonatomic) BOOL inPlaceConversion;
@property (nonatomic) long long outputFormat;
@property (nonatomic) BOOL passphrase;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *certificate;
@property (nonatomic) unsigned long long encryptionMethod;
@property (nonatomic) unsigned long long maxRawUDIFRunSize;
@property (nonatomic) unsigned long long sparseBundleBandSize;
@property (nonatomic) BOOL shouldValidateShadows;
@property (nonatomic) BOOL useFormatMappingInfo;

+ (BOOL)supportsSecureCoding;

- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForInplaceWithURL:(id)a0 error:(id *)a1;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 shadowURLs:(id)a2 error:(id *)a3;
- (BOOL)setPassphrase:(const char *)a0 encryptionMethod:(unsigned long long)a1 error:(id *)a2;
- (id)convertWithCompletionBlock:(id /* block */)a0;
- (id)copyUpdatedOutputURLWithError:(id *)a0;
- (id)initForInplaceWithExistingParams:(id)a0 error:(id *)a1;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 error:(id *)a2;
- (BOOL)onConvertCompletionWithInError:(id)a0 outError:(id *)a1;
- (BOOL)openExistingImageWithError:(id *)a0;
- (id)prepareConvertWithError:(id *)a0;
- (BOOL)prepareParamsForSquashWithError:(id *)a0;
- (BOOL)prepareParamsWithError:(id *)a0;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)shouldPerformInplaceSquash;
- (BOOL)validateDeserializationWithError:(id *)a0;
- (BOOL)validateFileWithURL:(id)a0 error:(id *)a1;
- (BOOL)validateSquashFormats;

@end
