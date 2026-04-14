@interface CRKFetchActiveInstructorsRequest : CATTaskRequest

@property (nonatomic) BOOL includeImages;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
