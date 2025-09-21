@class NSString, TRIDatabase;

@interface TRIExperimentDatabase : NSObject <TRIActiveLowLevelNamespacesProviding, TRIExperimentCountProviding> {
    TRIDatabase *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (char)_enumerateExperimentRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (id)_statusTypesForFactorPackSetReferenceType:(unsigned int)a0;
- (void)activeCountWithCompletion:(id /* block */)a0;
- (id)activeLowLevelNamespaces;
- (struct { unsigned long long x0; })addExperimentWithExperimentDeployment:(id)a0 environment:(int)a1 type:(int)a2 status:(long long)a3 startDate:(id)a4 endDate:(id)a5 namespaces:(id)a6 artifact:(id)a7;
- (char)enumerateActiveExperimentRecordsWithVisibility:(unsigned int)a0 block:(id /* block */)a1;
- (char)enumerateExperimentRecordsMatchingExperimentId:(id)a0 block:(id /* block */)a1;
- (char)enumerateExperimentRecordsMatchingNamespaceName:(id)a0 block:(id /* block */)a1;
- (char)enumerateExperimentRecordsMatchingStatuses:(id)a0 block:(id /* block */)a1;
- (char)enumerateExperimentRecordsWithBlock:(id /* block */)a0;
- (char)enumerateNamespaceRecordsForExperimentDeployment:(id)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (id)experimentRecordWithExperimentDeployment:(id)a0;
- (char)hasRecordReferencingFactorPackSetId:(id)a0 withReferenceType:(unsigned int)a1;
- (char)hasRecordReferencingTreatmentId:(id)a0 withReferenceType:(unsigned int)a1;
- (char)namespacesAreAvailableForExperiment:(id)a0 startDate:(id)a1 endDate:(id)a2 namespaces:(id)a3;
- (struct { unsigned long long x0; })removeExperimentRecordWithExperimentDeployment:(id)a0;
- (char)setManuallyTargeted:(char)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (char)setStatus:(long long)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (char)setTreatmentId:(id)a0 factorPackSetId:(id)a1 forExperimentDeployment:(id)a2 usingTransaction:(id)a3;
- (char)setTreatmentId:(id)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (char)setTreatmentURL:(id)a0 forExperimentDeployment:(id)a1 namespaceName:(id)a2;
- (id)treatmentURLsForExperimentDeployment:(id)a0 usingTransaction:(id)a1;
- (char)updateEndDate:(id)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;

@end
