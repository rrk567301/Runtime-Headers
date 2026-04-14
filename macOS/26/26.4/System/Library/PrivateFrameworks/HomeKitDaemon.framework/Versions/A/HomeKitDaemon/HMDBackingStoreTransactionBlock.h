@class HMDBackingStoreTransactionOptions, NSString, NSMutableArray, HMDBackingStore;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging>

@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (retain, nonatomic) NSMutableArray *objects;
@property (nonatomic) BOOL committed;
@property (readonly, nonatomic) HMDBackingStoreTransactionOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sort:(id)a0;
+ (id)logCategory;

- (void)save:(id /* block */)a0;
- (void)save;
- (void)run;
- (void)run:(id /* block */)a0;
- (void)add:(id)a0 withMessage:(id)a1;
- (id)initWithBackingStore:(id)a0 options:(id)a1 label:(id)a2;
- (void)runWithCoreDataBlock:(id /* block */)a0 withCompletionBlock:(id /* block */)a1;
- (void)runWithoutSave:(id /* block */)a0;
- (void)dumpDebug:(id)a0;
- (void)add:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)dumpDebug;
- (void)dumpWithVerbosity:(BOOL)a0 prefix:(id)a1 logType:(unsigned char)a2;
- (void)addObjects:(id)a0;

@end
