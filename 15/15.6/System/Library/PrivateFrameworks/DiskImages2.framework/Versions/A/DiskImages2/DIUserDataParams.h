@class NSDictionary;

@interface DIUserDataParams : DIBaseParams

@property (retain, nonatomic) NSDictionary *userDict;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (char)retrieveWithError:(id *)a0;
- (char)embedWithError:(id *)a0;
- (char)supportsPstack;

@end
