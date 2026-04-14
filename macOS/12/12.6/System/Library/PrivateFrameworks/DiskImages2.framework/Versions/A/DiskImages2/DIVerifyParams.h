@interface DIVerifyParams : DIBaseParams

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)verifyWithError:(id *)a0;

@end
