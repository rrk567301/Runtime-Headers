@class NSString, PFSceneTaxonomyNode, NSBundle;

@interface PFSceneTaxonomy : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>>> { struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>>> { void *__value_; } __ptr_; } _backingFile;
    const void *_nameMap;
    const void *_sceneMap;
    NSString *_dataPath;
    NSBundle *_localizationBundle;
    NSString *_tableName;
    BOOL _forceIndexed;
}

@property (readonly, getter=digest) NSString *sha256Hash;
@property (readonly) PFSceneTaxonomyNode *rootNode;
@property (readonly, copy) NSString *digest;
@property (readonly) const void *rootNodeRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTaxonomy;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)indexName;
- (id)localizedStringForKey:(id)a0;
- (const void *)nodeRefForSceneClassId:(unsigned int)a0;
- (unsigned long long)nodeCount;
- (id)nodeForSceneClassId:(unsigned int)a0;
- (id)nodeForName:(id)a0;
- (const void *)nodeRefForName:(id)a0;
- (id)initWithDataPath:(id)a0 localizationBundle:(id)a1 tableName:(id)a2;
- (id)dataArchivePath;
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:(const char *)a0 fileSize:(long long)a1;
- (const char *)indexLabel;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser *x0; } x0; })archiveLineParserForIndexPath:(id)a0;
- (unsigned int)sceneClassIdForName:(id)a0;
- (BOOL)loadOrCreateIndex;

@end
