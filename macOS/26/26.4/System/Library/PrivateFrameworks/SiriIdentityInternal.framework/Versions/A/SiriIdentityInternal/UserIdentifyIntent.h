@class Identity;

@interface UserIdentifyIntent : INIntent

@property (nonatomic, retain) Identity *identity;
@property (nonatomic) long long caseType;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
