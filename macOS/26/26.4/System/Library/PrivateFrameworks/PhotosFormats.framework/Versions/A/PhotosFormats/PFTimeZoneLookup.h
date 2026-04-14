@class NSString;

@interface PFTimeZoneLookup : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { struct { void *__ptr_; } ; } _backingFile;
    const void *_timezones;
    const void *_rtree;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CLLocationCoordinate2D { double x0; double x1; })anyCoordinateForTimeZoneName:(id)a0;
- (unsigned long long)indexFileVersion;
- (void).cxx_destruct;
- (id)indexName;
- (BOOL)indexSupported;
- (id).cxx_construct;
- (BOOL)loadOrCreateIndex;
- (id)timeZoneNameForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (const char *)indexLabel;
- (BOOL)loadIndexFile:(const char *)a0 fileSize:(long long)a1;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct { struct ArchiveLineParser *x0; } x0; })archiveLineParserForIndexPath:(id)a0;

@end
