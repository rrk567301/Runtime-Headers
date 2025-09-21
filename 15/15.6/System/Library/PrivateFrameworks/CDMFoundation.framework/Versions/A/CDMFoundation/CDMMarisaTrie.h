@class NSNumber, NSString;

@interface CDMMarisaTrie : NSObject <CDMBaseTrie> {
    NSString *_filePath;
    struct Trie { struct scoped_ptr<marisa::grimoire::trie::LoudsTrie> { struct LoudsTrie *ptr_; } trie_; } _readOnlyTrie;
    NSNumber *_versionNumber;
}

@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) NSNumber *hashValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (char)hasPrefix:(id)a0;
- (id).cxx_construct;
- (char)_loadTrie;
- (id)initWithFilePath:(id)a0 versionNumber:(id)a1;
- (id)traversePrefix:(id)a0;
- (id)_readCachedNumberValueForKey:(id)a0;
- (char)createFromEntries:(id)a0;
- (char)createFromEntries:(id)a0 withHashValue:(id)a1;
- (char)hasEntry:(id)a0;

@end
