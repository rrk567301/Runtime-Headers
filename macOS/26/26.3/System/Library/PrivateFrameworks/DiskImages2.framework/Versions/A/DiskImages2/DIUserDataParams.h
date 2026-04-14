@class NSDictionary;

@interface DIUserDataParams : DIBaseParams

@property (retain, nonatomic) NSDictionary *userDict;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)retrieveWithError:(id *)a0;
- (BOOL)embedWithError:(id *)a0;
- (BOOL)openExistingImageWithError:(id *)a0;
- (BOOL)supportsPstack;

@end
