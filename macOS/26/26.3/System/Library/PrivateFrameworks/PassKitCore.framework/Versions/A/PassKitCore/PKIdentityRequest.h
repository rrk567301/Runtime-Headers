@class NSString, NSURL, NSData;
@protocol PKIdentityDocumentDescriptor;

@interface PKIdentityRequest : NSObject

@property (copy, nonatomic) NSString *applicationIdentifierOverride;
@property (copy, nonatomic) NSString *merchantNameOverride;
@property (copy, nonatomic) NSURL *merchantPrivacyPolicyOverride;
@property (retain, nonatomic) id<PKIdentityDocumentDescriptor> descriptor;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *usageDescriptionKey;

- (id)description;
- (void).cxx_destruct;

@end
