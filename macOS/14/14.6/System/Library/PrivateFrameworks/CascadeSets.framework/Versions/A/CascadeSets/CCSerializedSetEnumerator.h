@class NSArray;

@interface CCSerializedSetEnumerator : NSObject <CCSetEnumerator>

@property (readonly, nonatomic) NSArray *serializedSets;

- (id)init;
- (void).cxx_destruct;
- (id)allSets:(id *)a0;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithSerializedSets:(id)a0;

@end
