@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (BOOL)containsBundleId:(id)a0;
- (void).cxx_destruct;
- (id)trie;
- (id)init;

@end
