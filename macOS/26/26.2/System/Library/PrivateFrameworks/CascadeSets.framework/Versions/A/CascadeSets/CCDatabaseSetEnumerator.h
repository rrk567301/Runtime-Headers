@class CCDataResourceReadAccess;

@interface CCDatabaseSetEnumerator : NSObject <CCSetEnumerator> {
    CCDataResourceReadAccess *_readAccess;
}

+ (id)defaultEnumeratorWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)allSets:(id *)a0;
- (id)allSetsWithItemType:(unsigned short)a0 error:(id *)a1;
- (BOOL)enumerateAllSets:(id *)a0 itemType:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 setIdentifiers:(id)a2 descriptors:(id)a3 startAfterSet:(id)a4 usingBlock:(id /* block */)a5;
- (id)initWithReadAccess:(id)a0;
- (id)allSetsWithOptions:(unsigned short)a0 error:(id *)a1;
- (id)allSetsWithOptions:(unsigned short)a0 itemType:(unsigned short)a1 descriptors:(id)a2 error:(id *)a3;
- (id)allSetsWithOptions:(unsigned short)a0 itemType:(unsigned short)a1 error:(id *)a2;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 itemType:(unsigned short)a2 descriptors:(id)a3 usingBlock:(id /* block */)a4;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 itemType:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 usingBlock:(id /* block */)a2;

@end
