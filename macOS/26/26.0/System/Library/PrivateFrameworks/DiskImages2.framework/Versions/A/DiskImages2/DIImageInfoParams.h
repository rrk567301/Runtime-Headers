@class NSDictionary;

@interface DIImageInfoParams : DIBaseParams

@property (copy, nonatomic) NSDictionary *imageInfo;
@property BOOL extraInfo;
@property BOOL encryptionInfoOnly;
@property BOOL openEncryption;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isDiskImageWithURL:(id)a0;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithExistingParams:(id)a0 error:(id *)a1;
- (BOOL)retrieveWithError:(id *)a0;

@end
