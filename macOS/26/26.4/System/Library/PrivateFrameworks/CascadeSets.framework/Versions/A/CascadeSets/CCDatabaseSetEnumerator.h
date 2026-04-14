@class NSCache, CCDataResourceReadAccess;

@interface CCDatabaseSetEnumerator : NSObject <CCSetEnumerator> {
    CCDataResourceReadAccess *_readAccess;
    NSCache *_setKeyCache;
}

+ (id)defaultEnumeratorWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)allSets:(id *)a0;
- (id)allSetsWithItemType:(unsigned short)a0 error:(id *)a1;
- (BOOL)enumerateAllSets:(id *)a0 itemType:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllSetsWithIdentifiers:(id)a0 descriptors:(id)a1 options:(unsigned short)a2 startAfterSet:(id)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
- (id)initWithReadAccess:(id)a0;
- (BOOL)_searchForKey:(id)a0 options:(unsigned short)a1 outSet:(id *)a2 error:(id *)a3;
- (id)allSetsWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 error:(id *)a3;
- (id)allSetsWithItemType:(unsigned short)a0 options:(unsigned short)a1 error:(id *)a2;
- (id)allSetsWithOptions:(unsigned short)a0 error:(id *)a1;
- (id)allSetsWithOptions:(unsigned short)a0 itemType:(unsigned short)a1 error:(id *)a2;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllSetsWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (BOOL)enumerateAllSetsWithItemType:(unsigned short)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllSetsWithItemType:(unsigned short)a0 options:(unsigned short)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateAllSetsWithOptions:(unsigned short)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)setWithKey:(id)a0 error:(id *)a1;

@end
