@interface HCBurstTrie : NSObject

@property (nonatomic) struct _CFBurstTrie { } *burstTrie;
@property (readonly, nonatomic) unsigned long long keysAdded;

+ (id)burstTrieFromFile:(id)a0;

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (char)writeToFile:(id)a0;
- (void)_createUnderlyingBurstTrie;
- (id)payloadForKey:(id)a0;

@end
