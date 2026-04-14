@class _PASLock;

@interface PPSocialHighlightStorageUtilities : NSObject {
    _PASLock *_bundleIdToAppIdCacheLock;
}

+ (id)excludedChatBundleIds;
+ (id)filteredAllowedChatBundleIds:(id)a0;

- (void)clearCache;
- (id)resolveBundleIdToApplicationIdentifierIfInstalled:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
