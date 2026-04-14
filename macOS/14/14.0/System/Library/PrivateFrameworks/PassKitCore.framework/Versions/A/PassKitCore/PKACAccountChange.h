@interface PKACAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long operation;
@property (readonly, nonatomic) BOOL enablementOfRelevantDataclassesChanged;
@property (readonly, nonatomic) BOOL enablementOfWalletDataclassChanged;
@property (readonly, nonatomic) BOOL enablementOfUbiquityDataclassChanged;
@property (readonly, nonatomic) BOOL accountManagedStateChanged;
@property (readonly, nonatomic) BOOL accountOrderChanged;
@property (readonly, nonatomic) BOOL accountStorefrontChanged;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperation:(long long)a0 newAccount:(id)a1 oldAccount:(id)a2;

@end
