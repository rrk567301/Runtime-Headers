@class NSArray, PKPassShareActivationOptions;

@interface PKAppletSubcredentialSharingConfiguration : NSObject <NSSecureCoding> {
    NSArray *_entitlements;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (nonatomic) BOOL sharingRequiresPassword;
@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (nonatomic) unsigned long long sharingPasswordLength;

- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
