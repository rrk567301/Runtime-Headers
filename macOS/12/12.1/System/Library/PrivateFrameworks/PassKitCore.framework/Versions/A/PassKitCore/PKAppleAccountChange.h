@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) PKAppleAccountState *currentState;
@property (readonly, nonatomic) PKAppleAccountState *previousState;

+ (long long)changeTypeToAccount:(id)a0 fromAccount:(id)a1;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)didRelevantDataclassesChange;
- (BOOL)didAccountManagedStateChange;
- (BOOL)didAccountOrderChange;
- (BOOL)shouldBeNotedByPassLibrary;
- (id)initWithEvent:(long long)a0 currentAccount:(id)a1 previousAccount:(id)a2;

@end
