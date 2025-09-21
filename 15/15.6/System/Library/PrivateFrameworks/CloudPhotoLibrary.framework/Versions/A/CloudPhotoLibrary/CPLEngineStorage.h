@class NSString, CPLEngineStore, CPLPlatformObject;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {
    char _superWasCalled;
}

@property (readonly, nonatomic) CPLEngineStore *engineStore;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *mainScopeIdentifier;
@property (readonly, nonatomic) unsigned long long scopeType;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char shouldBeCreatedDynamically;
@property (readonly, nonatomic) char isAlive;
@property (readonly, nonatomic) char shouldIncludeInStatus;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)status;
- (char)openWithError:(id *)a0;
- (char)closeWithError:(id *)a0;
- (id)statusDictionary;
- (char)_checkSuperWasCalled;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (char)performMaintenanceWithError:(id *)a0;
- (char)performUpgradeWithError:(id *)a0;
- (id)statusPerScopeIndex;
- (char)testKey:(id)a0 value:(id)a1 didHandle:(char *)a2 result:(id *)a3 error:(id *)a4;
- (void)transactionDidFinish;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
