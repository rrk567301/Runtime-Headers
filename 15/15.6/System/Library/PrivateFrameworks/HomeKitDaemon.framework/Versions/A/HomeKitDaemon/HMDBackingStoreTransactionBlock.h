@class HMDBackingStoreTransactionOptions, NSString, NSMutableArray, HMDBackingStore;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging>

@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (retain, nonatomic) NSMutableArray *objects;
@property (nonatomic) char committed;
@property (readonly, nonatomic) HMDBackingStoreTransactionOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)sort:(id)a0;

- (void)run;
- (void).cxx_destruct;
- (void)save;
- (void)add:(id)a0;
- (void)addObjects:(id)a0;
- (void)save:(id /* block */)a0;
- (void)run:(id /* block */)a0;
- (id)logIdentifier;
- (void)dumpDebug;
- (void)dumpDebug:(id)a0;
- (void)runWithoutSave:(id /* block */)a0;
- (void)add:(id)a0 withMessage:(id)a1;
- (void)dumpWithVerbosity:(char)a0 prefix:(id)a1 logType:(unsigned char)a2;
- (id)initWithBackingStore:(id)a0 options:(id)a1 label:(id)a2;
- (void)runWithCoreDataBlock:(id /* block */)a0 withCompletionBlock:(id /* block */)a1;

@end
