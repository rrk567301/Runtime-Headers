@class NSDictionary;

@interface DIImageInfoParams : DIBaseParams

@property (copy, nonatomic) NSDictionary *imageInfo;
@property char extraInfo;
@property char openEncryption;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithExistingParams:(id)a0 error:(id *)a1;
- (char)retrieveWithError:(id *)a0;

@end
