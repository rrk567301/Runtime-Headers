@class NSData, NSString, NSURL;
@protocol DIIdentityDocumentDescriptor;

@interface DIIdentityRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<DIIdentityDocumentDescriptor> _descriptor;
    NSString *_merchantIdentifier;
    NSData *_nonce;
    NSString *_applicationIdentifierOverride;
    NSString *_merchantNameOverride;
    NSURL *_merchantPrivacyPolicyOverride;
    long long _merchantLogoOverride;
    NSString *_usageDescriptionKey;
}

@property (retain, nonatomic) id<DIIdentityDocumentDescriptor> descriptor;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *usageDescriptionKey;
@property (copy, nonatomic) NSString *applicationIdentifierOverride;
@property (copy, nonatomic) NSString *merchantNameOverride;
@property (copy, nonatomic) NSURL *merchantPrivacyPolicyOverride;
@property (nonatomic) long long merchantLogoOverride;

- (id)context;
- (void)setContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
