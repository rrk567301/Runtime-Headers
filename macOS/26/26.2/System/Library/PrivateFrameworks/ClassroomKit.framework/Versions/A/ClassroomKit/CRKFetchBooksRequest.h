@interface CRKFetchBooksRequest : CATTaskRequest

@property (nonatomic) BOOL includeImages;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValidWithError:(id *)a0;

@end
