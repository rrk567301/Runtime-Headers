@class NSString, KVItemMapper, MPMediaLibrary;

@interface CKVMediaLibraryBridge : NSObject <CKVProviderDatasetBridge> {
    MPMediaLibrary *_mediaLibrary;
    KVItemMapper *_itemMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)itemType;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithMediaLibrary:(id)a0;

@end
