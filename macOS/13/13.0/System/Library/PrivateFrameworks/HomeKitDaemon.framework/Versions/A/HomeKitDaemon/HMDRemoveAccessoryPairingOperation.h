@class NSString;

@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly, nonatomic) NSString *pairingIdentifierToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicate;
+ (id)logCategory;

- (id)logIdentifier;
- (BOOL)mainWithError:(id *)a0;
- (id)initWithAccessory:(id)a0 accessoryIdentifier:(id)a1 homeUUIDWhereAccessoryWasPaired:(id)a2 identityToRemove:(id)a3 userData:(id)a4;
- (id)initWithAccessory:(id)a0 identityToRemove:(id)a1;
- (id)initWithAccessory:(id)a0 identityToRemove:(id)a1 userData:(id)a2;

@end
