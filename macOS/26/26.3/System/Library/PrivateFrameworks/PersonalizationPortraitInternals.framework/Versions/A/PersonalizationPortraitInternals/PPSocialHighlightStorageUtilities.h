@class _PASLock;

@interface PPSocialHighlightStorageUtilities : NSObject {
    _PASLock *_bundleIdToAppIdCacheLock;
}

+ (id)excludedChatBundleIds;
+ (id)filteredAllowedChatBundleIds:(id)a0;

- (id)init;
- (id)resolveBundleIdToApplicationIdentifierIfInstalled:(id)a0;
- (void)clearCache;
- (void).cxx_destruct;

@end
