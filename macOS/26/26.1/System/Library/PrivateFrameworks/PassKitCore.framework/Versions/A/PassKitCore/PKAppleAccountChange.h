@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) PKAppleAccountState *currentState;
@property (readonly, nonatomic) PKAppleAccountState *previousState;

+ (long long)changeTypeToAccount:(id)a0 fromAccount:(id)a1;

- (BOOL)didAccountManagedStateChange;
- (BOOL)didAccountOrderChange;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithEvent:(long long)a0 currentAccount:(id)a1 previousAccount:(id)a2;
- (BOOL)didEnablementOfRelevantDataclassesChange;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)didEnablementOfUbiquityDataclassChange;
- (BOOL)didEnablementOfWalletDataclassChange;
- (BOOL)shouldBeNotedByPassLibrary;

@end
