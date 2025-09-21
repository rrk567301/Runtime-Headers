@class NSArray, PKPassShareActivationOptions;

@interface PKAppletSubcredentialSharingConfiguration : NSObject <NSSecureCoding> {
    NSArray *_entitlements;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (nonatomic) char sharingRequiresPassword;
@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (nonatomic) unsigned long long sharingPasswordLength;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
