@class NSString, NSArray;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeInternalState;
@property (nonatomic) BOOL includePayloadContents;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *payloadIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
