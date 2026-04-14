@class NSString, NSMutableDictionary;

@interface NSPersistentUISecureURLHerder : NSObject {
    NSMutableDictionary *_urlsStashedInLSToSharedFileListItemRefs;
    void *_lsSharedFileList;
    NSString *_bundleID;
}

- (void)dealloc;
- (id)initWithBundleID:(id)a0;
- (void)fetchAndConsumeLSPersistentFileList;
- (void)resolveSecurityScopedURLsFromRecords:(id)a0;
- (struct OpaqueLSSharedFileListRef { } *)getLSPersistentFileList;

@end
