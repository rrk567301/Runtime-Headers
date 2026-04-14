@class NSData, NSString, NSURL;
@protocol DIIdentityDocumentDescriptor;

@interface DIIdentityRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_merchantNameOverride;
    id<DIIdentityDocumentDescriptor> _descriptor;
    NSString *_merchantIdentifier;
    NSData *_nonce;
    NSURL *_merchantPrivacyPolicyOverride;
}

@property (retain, nonatomic) id<DIIdentityDocumentDescriptor> descriptor;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *merchantNameOverride;
@property (copy, nonatomic) NSURL *merchantPrivacyPolicyOverride;

- (id)context;
- (void)setContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
