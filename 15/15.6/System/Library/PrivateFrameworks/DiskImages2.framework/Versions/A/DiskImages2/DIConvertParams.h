@class NSArray, DIURL, DIBaseParams, NSString;

@interface DIConvertParams : DIBaseParams

@property (copy, nonatomic) DIURL *outputURL;
@property (retain, nonatomic) DIBaseParams *outputParams;
@property (nonatomic) unsigned long long conversionMethod;
@property (readonly, nonatomic) NSArray *shadowURLs;
@property (readonly, nonatomic) char inPlaceConversion;
@property (nonatomic) long long outputFormat;
@property (nonatomic) char passphrase;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *certificate;
@property (nonatomic) unsigned long long encryptionMethod;
@property (nonatomic) unsigned long long maxRawUDIFRunSize;
@property (nonatomic) unsigned long long sparseBundleBandSize;
@property (nonatomic) char shouldValidateShadows;
@property (nonatomic) char useFormatMappingInfo;

+ (char)supportsSecureCoding;
+ (char)isUDIFWithFormat:(long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)initForInplaceWithURL:(id)a0 error:(id *)a1;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 error:(id *)a2;
- (char)convertWithError:(id *)a0;
- (id)copyUpdatedOutputURLWithError:(id *)a0;
- (id)initForInplaceWithExistingParams:(id)a0 error:(id *)a1;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 shadowURLs:(id)a2 error:(id *)a3;
- (char)prepareParamsForSquashWithError:(id *)a0;
- (char)prepareParamsWithError:(id *)a0;
- (char)shouldPerformInplaceSquash;
- (char)validateDeserializationWithError:(id *)a0;
- (char)validateFileWithURL:(id)a0 error:(id *)a1;
- (char)validateSquashFormats;

@end
