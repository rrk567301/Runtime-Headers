@interface AACClient.AECNoOpPolicyStore : _TtCs12_SwiftObject <AEPolicyStore>

@property (nonatomic, readonly) BOOL exists;
@property (nonatomic, readonly) BOOL hasPersistentData;

- (BOOL)cleanUpPolicyStoreWithError:(id *)a0;
- (id)readOnlyScratchpadForIdentifier:(id)a0;
- (id)writeOnlyScratchpadForIdentifier:(id)a0;

@end
