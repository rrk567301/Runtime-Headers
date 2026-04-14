@class NSArray;

@interface CCSerializedSetEnumerator : NSObject <CCSetEnumerator> {
    NSArray *_serializedSetData;
    NSArray *_serializedSets;
}

- (id)init;
- (void).cxx_destruct;
- (id)allSets:(id *)a0;
- (id)allSetsWithItemType:(unsigned short)a0 error:(id *)a1;
- (BOOL)enumerateAllSets:(id *)a0 itemType:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithSerializedSetData:(id)a0;
- (id)initWithSerializedSets:(id)a0;

@end
