@interface PKACAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long operation;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) char enablementOfRelevantDataclassesChanged;
@property (readonly, nonatomic) char enablementOfWalletDataclassChanged;
@property (readonly, nonatomic) char enablementOfUbiquityDataclassChanged;
@property (readonly, nonatomic) char accountManagedStateChanged;
@property (readonly, nonatomic) char accountOrderChanged;
@property (readonly, nonatomic) char accountStorefrontChanged;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_operationTypeForChangeType:(int)a0 newAccount:(id)a1 oldAccount:(id)a2;
- (id)initWithChangeType:(int)a0 event:(long long)a1 newAccount:(id)a2 oldAccount:(id)a3;
- (id)initWithChangeType:(int)a0 newAccount:(id)a1 oldAccount:(id)a2;

@end
