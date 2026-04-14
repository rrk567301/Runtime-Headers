@class NSString;

@interface PLSearchMetadataStore : NSObject {
    NSString *_storePath;
}

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)deleteStore;
- (id)currentSearchMetadata;
- (void)updateSearchMetadataTo:(id)a0;

@end
