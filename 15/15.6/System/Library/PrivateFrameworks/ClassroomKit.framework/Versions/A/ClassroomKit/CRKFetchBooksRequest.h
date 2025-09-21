@interface CRKFetchBooksRequest : CATTaskRequest

@property (nonatomic) char includeImages;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isValidWithError:(id *)a0;

@end
