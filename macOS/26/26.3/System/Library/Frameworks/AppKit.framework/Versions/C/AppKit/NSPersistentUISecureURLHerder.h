@class NSString, NSMutableDictionary;

@interface NSPersistentUISecureURLHerder : NSObject {
    NSMutableDictionary *_urlsStashedInLSToSharedFileListItemRefs;
    void *_lsSharedFileList;
    NSString *_bundleID;
}

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;
- (void)dealloc;
- (void)fetchAndConsumeLSPersistentFileList;
- (struct OpaqueLSSharedFileListRef { } *)getLSPersistentFileList;
- (void)resolveSecurityScopedURLsFromRecords:(id)a0;

@end
