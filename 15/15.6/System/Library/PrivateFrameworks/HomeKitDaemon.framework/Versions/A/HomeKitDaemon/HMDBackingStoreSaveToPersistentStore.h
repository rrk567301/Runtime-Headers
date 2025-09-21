@class NSString, HMDHomeManager;

@interface HMDBackingStoreSaveToPersistentStore : HMDBackingStoreOperation

@property (readonly, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) char incrementGeneration;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 reason:(id)a1 incrementGeneration:(char)a2;
- (id)mainReturningError;

@end
