@class NSDictionary;

@interface DIUserDataParams : DIBaseParams

@property (retain, nonatomic) NSDictionary *userDict;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)retrieveWithError:(id *)a0;
- (BOOL)embedWithError:(id *)a0;
- (BOOL)openExistingImageWithError:(id *)a0;
- (BOOL)supportsPstack;

@end
