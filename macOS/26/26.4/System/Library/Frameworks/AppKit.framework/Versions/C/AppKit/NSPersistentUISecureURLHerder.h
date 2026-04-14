@class NSString, NSMutableDictionary;

@interface NSPersistentUISecureURLHerder : NSObject {
    NSMutableDictionary *_urlsStashedInLSToSharedFileListItemRefs;
    void *_lsSharedFileList;
    NSString *_bundleID;
}

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchAndConsumeLSPersistentFileList;
- (struct OpaqueLSSharedFileListRef { } *)getLSPersistentFileList;
- (void)resolveSecurityScopedURLsFromRecords:(id)a0;

@end
