@class NSString, CPLEngineStore, CPLPlatformObject;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {
    BOOL _superWasCalled;
}

@property (readonly, nonatomic) CPLEngineStore *engineStore;
@property (readonly, nonatomic) NSString *mainScopeIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long scopeType;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL shouldBeCreatedDynamically;
@property (readonly, nonatomic) BOOL isAlive;
@property (readonly, nonatomic) BOOL shouldIncludeInStatus;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformImplementationProtocol;

- (void)writeTransactionDidSucceed;
- (BOOL)openWithError:(id *)a0;
- (void)writeTransactionDidFail;
- (BOOL)performMaintenanceWithError:(id *)a0;
- (BOOL)closeWithError:(id *)a0;
- (void)transactionDidFinish;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (id)statusDictionary;
- (void).cxx_destruct;
- (id)status;
- (BOOL)performUpgradeWithError:(id *)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)redactedDescription;
- (BOOL)_checkSuperWasCalled;
- (id)scopeIndexes;
- (id)statusPerScopeIndex;
- (BOOL)testKey:(id)a0 value:(id)a1 didHandle:(BOOL *)a2 result:(id *)a3 error:(id *)a4;

@end
