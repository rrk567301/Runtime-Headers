@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) PKAppleAccountState *currentState;
@property (readonly, nonatomic) PKAppleAccountState *previousState;

+ (long long)changeTypeToAccount:(id)a0 fromAccount:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)didAccountManagedStateChange;
- (void).cxx_destruct;
- (BOOL)didEnablementOfRelevantDataclassesChange;
- (BOOL)shouldBeNotedByPassLibrary;
- (BOOL)didEnablementOfUbiquityDataclassChange;
- (id)description;
- (id)initWithEvent:(long long)a0 currentAccount:(id)a1 previousAccount:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)didEnablementOfWalletDataclassChange;
- (BOOL)didAccountOrderChange;

@end
