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

- (void)writeTransactionDidFail;
- (BOOL)closeWithError:(id *)a0;
- (id)redactedDescription;
- (BOOL)openWithError:(id *)a0;
- (BOOL)performUpgradeWithError:(id *)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (BOOL)performMaintenanceWithError:(id *)a0;
- (id)status;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (void)writeTransactionDidSucceed;
- (void).cxx_destruct;
- (void)transactionDidFinish;
- (id)statusDictionary;
- (BOOL)_checkSuperWasCalled;
- (id)scopeIndexes;
- (id)statusPerScopeIndex;
- (BOOL)testKey:(id)a0 value:(id)a1 didHandle:(BOOL *)a2 result:(id *)a3 error:(id *)a4;

@end
