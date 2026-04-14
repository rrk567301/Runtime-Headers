@class HDProfile;

@interface HDDatabasePruningTask : NSObject {
    HDProfile *_profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)enqueueMaintenanceOperationOnCoordinator:(id)a0 takeAccessibilityAssertion:(BOOL)a1 nowDate:(id)a2 completion:(id /* block */)a3;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)a0 nowDate:(id)a1 error:(id *)a2;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)a0 nowDate:(id)a1 prunedObjectLimit:(unsigned long long)a2 prunedObjectTransactionLimit:(unsigned long long)a3 error:(id *)a4;

@end
