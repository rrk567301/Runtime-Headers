@class NSString, NSArray;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest

@property (nonatomic) char includeInternalState;
@property (nonatomic) char includePayloadContents;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *payloadIdentifiers;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
