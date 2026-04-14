@class NSString;

@interface PFSceneGeography : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    NSString *_dataArchivePath;
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>> { struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>> { void *__value_; } __ptr_; } _backingFile;
    const void *_floatMap;
    const void *_scenes;
    const void *_poi;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)indexName;
- (double)scoreForPOI:(id)a0 scenes:(id)a1 maxScenesCount:(long long)a2;
- (BOOL)loadOrCreateIndex;
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:(const char *)a0 fileSize:(long long)a1;
- (const char *)indexLabel;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser *x0; } x0; })archiveLineParserForIndexPath:(id)a0;
- (id)dataArchivePath;
- (BOOL)indexSupported;
- (id)scenesByScoreForPOIHash:(id)a0;

@end
