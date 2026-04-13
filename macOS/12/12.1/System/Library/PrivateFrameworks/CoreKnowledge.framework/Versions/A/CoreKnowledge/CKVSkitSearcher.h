@class NSString, CKVIndexManager, CKVSettings;

@interface CKVSkitSearcher : NSObject <CKVSpanMatchSearchIndex> {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)locale;
- (id)searchIndexForTokenChain:(id)a0;
- (id)initWithIndexManager:(id)a0 settings:(id)a1;

@end
