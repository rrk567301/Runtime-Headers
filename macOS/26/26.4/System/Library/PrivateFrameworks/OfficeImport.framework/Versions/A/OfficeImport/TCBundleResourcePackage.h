@class OISFUZipArchive, NSMutableDictionary;

@interface TCBundleResourcePackage : NSObject {
    OISFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mEntryMapLock;
}

- (void).cxx_destruct;
- (id)entryWithName:(id)a0 cacheResult:(BOOL)a1;
- (id)initWithZipArchive:(id)a0;

@end
