@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)trie;
- (char)containsBundleId:(id)a0;

@end
