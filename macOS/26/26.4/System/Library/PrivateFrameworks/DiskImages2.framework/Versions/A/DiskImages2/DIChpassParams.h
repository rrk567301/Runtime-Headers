@interface DIChpassParams : DIBaseParams

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)changePassWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)chpassWithError:(id *)a0;
- (BOOL)openExistingImageWithError:(id *)a0;
- (BOOL)prepareImageWithXpcHandler:(id)a0 fileMode:(long long)a1 encChpass:(id)a2 error:(id *)a3;

@end
