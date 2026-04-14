@class NSString, NSData;

@interface WatchSportsEventIntent : INIntent

@property (nonatomic, copy) NSString *matchupId;
@property (nonatomic, copy) NSData *usoEntityData;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
