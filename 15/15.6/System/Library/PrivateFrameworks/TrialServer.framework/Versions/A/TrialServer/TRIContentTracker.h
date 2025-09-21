@class TRIDatabase;

@interface TRIContentTracker : NSObject {
    TRIDatabase *_db;
}

+ (id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)a0 container:(id)a1;
+ (id)contentIdentifierForBMLTArtifactWithDeployment:(id)a0;
+ (id)contentIdentifierForExperimentArtifactWithDeployment:(id)a0;
+ (id)contentIdentifierForFactorPackSetWithId:(id)a0;
+ (id)contentIdentifierForRolloutArtifactWithDeployment:(id)a0;
+ (id)decodeContentIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (char)clearRefsWithContentIdentifier:(id)a0;
- (char)enumerateTrackedItemsWithBlock:(id /* block */)a0;
- (char)_addOrDropRefWithContentIdentifier:(id)a0 changeType:(unsigned long long)a1;
- (char)addRefWithContentIdentifier:(id)a0;
- (char)dropRefWithContentIdentifier:(id)a0;
- (char)refCountForContentIdentifier:(id)a0 refCount:(long long *)a1;

@end
