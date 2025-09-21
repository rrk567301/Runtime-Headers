@interface DIVerifyParams : DIBaseParams

@property (nonatomic) char shouldValidateShadows;

+ (char)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (char)verifyWithError:(id *)a0;
- (id)initWithURL:(id)a0 shadowURLs:(id)a1 error:(id *)a2;

@end
