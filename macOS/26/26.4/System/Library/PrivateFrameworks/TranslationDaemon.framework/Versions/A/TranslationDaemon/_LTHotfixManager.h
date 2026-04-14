@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface _LTHotfixManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_hotfixURL;
}

@property (class, readonly, nonatomic) _LTHotfixManager *shared;

@property (readonly, nonatomic) NSURL *hotfixURL;

+ (void)initialize;
+ (void)_enableTestFixture:(BOOL)a0;

- (id)_versionedHotfixDirectoryNameFromBasePath:(id)a0;
- (void)setHotfixURL:(id)a0;
- (void)_downloadMappingPlist:(id /* block */)a0;
- (id)_CDNURL:(id)a0;
- (void)_downloadHotfix:(id)a0 completion:(id /* block */)a1;
- (void)_updateHotfixInternal:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_downloadWithURL:(id)a0 completion:(id /* block */)a1;
- (void)refreshHotfix:(id /* block */)a0;
- (void)_replaceHotfix:(long long)a0 completion:(id /* block */)a1;
- (id)init;
- (void)deleteHotfix:(id /* block */)a0;
- (void)updateHotfix:(id /* block */)a0;
- (void)_decompressArchive:(id)a0 to:(id)a1 error:(id *)a2;

@end
