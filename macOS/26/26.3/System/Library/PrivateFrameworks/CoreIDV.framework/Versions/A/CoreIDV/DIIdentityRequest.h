@class NSData, NSString, NSURL;
@protocol DIIdentityDocumentDescriptor;

@interface DIIdentityRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<DIIdentityDocumentDescriptor> _descriptor;
    NSString *_merchantIdentifier;
    NSData *_nonce;
    NSString *_merchantNameOverride;
    NSURL *_merchantPrivacyPolicyOverride;
    NSString *_usageDescriptionKey;
}

@property (retain, nonatomic) id<DIIdentityDocumentDescriptor> descriptor;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *usageDescriptionKey;
@property (copy, nonatomic) NSString *applicationIdentifierOverride;
@property (copy, nonatomic) NSString *merchantNameOverride;
@property (copy, nonatomic) NSURL *merchantPrivacyPolicyOverride;

- (void)setContext:(id)a0;
- (id)context;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setapplicationIdentifierOverride:(id)a0;

@end
