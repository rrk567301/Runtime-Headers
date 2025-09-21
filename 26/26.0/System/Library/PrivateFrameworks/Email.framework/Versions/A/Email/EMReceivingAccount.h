@class NSArray, NSString, ECEmailAddress, EMDeliveryAccount;

@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder> {
    struct EFAtomicObject { _Atomic long long cfObject; } _identityEmailAddress;
    NSString *_name;
}

@property (retain) EMDeliveryAccount *deliveryAccount;
@property (retain) NSArray *emailAddresses;
@property BOOL sourceIsManaged;
@property BOOL shouldArchiveByDefault;
@property BOOL isLocalAccount;
@property (copy, nonatomic) NSString *statisticsKind;
@property (readonly) ECEmailAddress *identityEmailAddress;
@property (readonly, nonatomic) BOOL supportsiCloudCleanup;
@property (copy) NSString *username;
@property (copy) NSString *hostname;
@property (getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 name:(id)a1 hostname:(id)a2 builder:(id /* block */)a3;
- (id)_calculateIdentityEmailAddress;
- (void)_commonInitName:(id)a0 hostname:(id)a1 builder:(id /* block */)a2;

@end
