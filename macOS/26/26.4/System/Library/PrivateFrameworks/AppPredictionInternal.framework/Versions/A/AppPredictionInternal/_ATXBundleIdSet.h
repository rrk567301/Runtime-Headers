@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (id)trie;
- (void).cxx_destruct;
- (id)init;
- (BOOL)containsBundleId:(id)a0;

@end
