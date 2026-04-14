@class NSString, NSData, NSNumber;

@interface WatchSportsEventIntent : INIntent

@property (nonatomic, copy) NSString *matchupId;
@property (nonatomic, copy) NSData *usoEntityData;
@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, copy) NSString *crossDeviceRequestInitiator;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
