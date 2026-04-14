@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) PKAppleAccountState *currentState;
@property (readonly, nonatomic) PKAppleAccountState *previousState;

+ (long long)changeTypeToAccount:(id)a0 fromAccount:(id)a1;

- (id)description;
- (BOOL)didAccountOrderChange;
- (BOOL)didEnablementOfRelevantDataclassesChange;
- (BOOL)didEnablementOfUbiquityDataclassChange;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)didAccountManagedStateChange;
- (id)initWithEvent:(long long)a0 currentAccount:(id)a1 previousAccount:(id)a2;
- (BOOL)didEnablementOfWalletDataclassChange;
- (BOOL)shouldBeNotedByPassLibrary;
- (void)encodeWithCoder:(id)a0;

@end
