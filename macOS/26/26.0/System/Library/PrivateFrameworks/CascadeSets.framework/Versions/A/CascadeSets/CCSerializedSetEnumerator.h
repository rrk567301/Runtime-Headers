@class NSArray;

@interface CCSerializedSetEnumerator : NSObject <CCSetEnumerator, NSSecureCoding> {
    NSArray *_serializedSetData;
    NSArray *_serializedSets;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)enumeratorForSerializedSets:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allSets:(id *)a0;
- (id)allSetsWithItemType:(unsigned short)a0 error:(id *)a1;
- (BOOL)enumerateAllSets:(id *)a0 itemType:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (id)allSetsWithOptions:(unsigned short)a0 error:(id *)a1;
- (id)allSetsWithOptions:(unsigned short)a0 itemType:(unsigned short)a1 descriptors:(id)a2 error:(id *)a3;
- (id)allSetsWithOptions:(unsigned short)a0 itemType:(unsigned short)a1 error:(id *)a2;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 itemType:(unsigned short)a2 descriptors:(id)a3 usingBlock:(id /* block */)a4;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 itemType:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (id)initWithSerializedSetData:(id)a0;
- (id)initWithSerializedSets:(id)a0;

@end
