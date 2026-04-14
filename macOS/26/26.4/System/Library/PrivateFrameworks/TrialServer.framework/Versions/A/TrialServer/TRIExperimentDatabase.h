@class NSString, TRIDatabase;

@interface TRIExperimentDatabase : NSObject <TRIExperimentCountProviding, TRIActiveSysctlNamespacesProviding, TRIActiveEnvVarNamespacesProviding> {
    TRIDatabase *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_singularAndUniqueNamespaceInRecord:(id)a0 alreadyMapped:(id)a1;

- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)updateEndDate:(id)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (id)initWithDatabase:(id)a0;
- (BOOL)setTreatmentId:(id)a0 factorPackSetId:(id)a1 forExperimentDeployment:(id)a2 usingTransaction:(id)a3;
- (BOOL)setTreatmentURL:(id)a0 forExperimentDeployment:(id)a1 namespaceName:(id)a2;
- (BOOL)_enumerateExperimentRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (struct { unsigned long long x0; })removeExperimentRecordWithExperimentDeployment:(id)a0;
- (id)activeSysctlNamespaces;
- (struct { unsigned long long x0; })addExperimentWithExperimentDeployment:(id)a0 environment:(int)a1 type:(int)a2 status:(long long)a3 startDate:(id)a4 endDate:(id)a5 namespaces:(id)a6 artifact:(id)a7;
- (BOOL)enumerateExperimentRecordsMatchingStatuses:(id)a0 block:(id /* block */)a1;
- (BOOL)enumerateNamespaceRecordsForExperimentDeployment:(id)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (id)activeEnvVarNamespaces;
- (BOOL)enumerateExperimentRecordsMatchingExperimentId:(id)a0 block:(id /* block */)a1;
- (id)treatmentURLsForExperimentDeployment:(id)a0 usingTransaction:(id)a1;
- (BOOL)enumerateExperimentRecordsMatchingNamespaceName:(id)a0 block:(id /* block */)a1;
- (void)activeCountWithCompletion:(id /* block */)a0;
- (BOOL)hasRecordReferencingFactorPackSetId:(id)a0 withReferenceType:(unsigned int)a1;
- (BOOL)setManuallyTargeted:(BOOL)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (BOOL)hasRecordReferencingTreatmentId:(id)a0 withReferenceType:(unsigned int)a1;
- (void).cxx_destruct;
- (id)experimentRecordWithExperimentDeployment:(id)a0;
- (BOOL)setTreatmentId:(id)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (BOOL)setStatus:(long long)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (id)init;
- (BOOL)namespacesAreAvailableForExperiment:(id)a0 startDate:(id)a1 endDate:(id)a2 namespaces:(id)a3;
- (BOOL)enumerateExperimentRecordsWithBlock:(id /* block */)a0;
- (BOOL)enumerateActiveExperimentRecordsWithBlock:(id /* block */)a0;
- (id)_statusTypesForFactorPackSetReferenceType:(unsigned int)a0;

@end
