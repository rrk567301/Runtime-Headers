@class _PASLock;

@interface PPSocialHighlightStorageUtilities : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (id)resolveBundleIdToApplicationIdentifierIfInstalled:(id)a0;

@end
