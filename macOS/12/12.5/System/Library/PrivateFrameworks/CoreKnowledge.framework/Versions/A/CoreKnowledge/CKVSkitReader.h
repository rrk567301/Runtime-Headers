@class NSString, NSURL, CKVProvisionalResourceManager;

@interface CKVSkitReader : NSObject <CKVSkitReadAccess> {
    NSURL *_directoryURL;
    CKVProvisionalResourceManager *_resourceManager;
    struct unique_ptr<skitbridge::Searcher, std::default_delete<skitbridge::Searcher>> { struct __compressed_pair<skitbridge::Searcher *, std::default_delete<skitbridge::Searcher>> { struct Searcher *__value_; } __ptr_; } _searcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)prewarm;
- (BOOL)deactivate;
- (id)matchSpansOfTokenChain:(id)a0 error:(id *)a1;
- (id)indexLocale;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (id)initWithSkitDirectoryURL:(id)a0 lifespan:(double)a1;
- (id)initWithSkitDirectoryURL:(id)a0;

@end
