@class NSDictionary, NSArray;

@interface PKExistingCardAuthorizationRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSDictionary *groupsBySessionIdentifier;
@property (readonly, nonatomic) NSArray *groups;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithGroupsBySessionIdentifier:(id)a0;

@end
