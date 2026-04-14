@class CCDataResourceReadAccess;

@interface CCDatabaseSetEnumerator : NSObject <CCSetEnumerator> {
    CCDataResourceReadAccess *_readAccess;
}

+ (id)defaultEnumeratorWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)allSets:(id *)a0;
- (id)allSetsWithItemType:(unsigned short)a0 error:(id *)a1;
- (id)initWithReadAccess:(id)a0;
- (BOOL)enumerateAllSets:(id *)a0 itemType:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;

@end
