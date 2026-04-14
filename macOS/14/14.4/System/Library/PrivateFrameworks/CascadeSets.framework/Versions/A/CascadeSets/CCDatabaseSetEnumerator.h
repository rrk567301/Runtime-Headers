@class NSArray, CCDataSiteReadAccess;

@interface CCDatabaseSetEnumerator : NSObject <CCSetEnumerator> {
    CCDataSiteReadAccess *_readAccess;
    NSArray *_databases;
}

+ (id)defaultEnumeratorWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)allSets:(id *)a0;
- (BOOL)enumerateAllSetsIncludingRowIds:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithDatabases:(id)a0;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithReadAccess:(id)a0;

@end
