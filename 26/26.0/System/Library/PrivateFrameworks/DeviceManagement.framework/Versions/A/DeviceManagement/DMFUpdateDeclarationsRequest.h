@class NSString, NSArray;

@interface DMFUpdateDeclarationsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *syncToken;
@property (copy, nonatomic) NSArray *upsertDeclarations;
@property (copy, nonatomic) NSArray *removeDeclarations;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
