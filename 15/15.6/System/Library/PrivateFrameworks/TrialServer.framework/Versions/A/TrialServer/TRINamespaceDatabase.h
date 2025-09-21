@class TRIDatabase;

@interface TRINamespaceDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (char)hasUnfetchedNamespaceForTeamId:(id)a0;
- (char)_enumerateDynamicNamespaceRecordsWithWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (char)addOrUpdateDynamicNamespaceWithName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 teamId:(id)a3 appContainerId:(id)a4 appContainerType:(long long)a5 cloudKitContainer:(int)a6;
- (id)dynamicNamespaceRecordWithNamespaceName:(id)a0;
- (char)enumerateAppContainerIdsForContainer:(int)a0 block:(id /* block */)a1;
- (char)enumerateDynamicNamespaceRecordsForContainer:(int)a0 teamId:(id)a1 block:(id /* block */)a2;
- (char)enumerateDynamicNamespaceRecordsWithBlock:(id /* block */)a0;
- (struct { unsigned long long x0; })removeDynamicNamespaceRecordWithNamespaceName:(id)a0;
- (struct { unsigned long long x0; })setFetched:(char)a0 forDynamicNamespaceName:(id)a1;

@end
