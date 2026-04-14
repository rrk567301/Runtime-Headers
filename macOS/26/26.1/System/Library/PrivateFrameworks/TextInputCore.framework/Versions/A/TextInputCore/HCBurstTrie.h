@interface HCBurstTrie : NSObject

@property (nonatomic) struct _CFBurstTrie { } *burstTrie;
@property (readonly, nonatomic) unsigned long long keysAdded;

+ (id)burstTrieFromFile:(id)a0;

- (BOOL)writeToFile:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)init;
- (void)_createUnderlyingBurstTrie;
- (id)payloadForKey:(id)a0;

@end
