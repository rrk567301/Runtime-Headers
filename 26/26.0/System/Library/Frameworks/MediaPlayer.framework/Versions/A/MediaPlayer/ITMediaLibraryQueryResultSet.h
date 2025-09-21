@class ITMediaLibraryQuery, NSArray, NSString, MPMediaQueryMutableSectionInfo, __cap_, __end_;

@interface ITMediaLibraryQueryResultSet : NSObject <MPMediaLibraryResultSet> {
    struct vector<ITMediaEntity *, std::allocator<ITMediaEntity *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _results;
    MPMediaQueryMutableSectionInfo *_sectionInfo;
    BOOL _requestingCollection;
}

@property (readonly, nonatomic) ITMediaLibraryQuery *query;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long localRevision;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (id)initWithQuery:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sortResults;
- (void)buildSectionInfo;
- (id)collectionOrderingPropertiesForGroupingType:(long long)a0;
- (void)enumerateSectionHeadersUsingBlock:(id /* block */)a0;
- (id)initWithQuery:(id)a0 isCollection:(BOOL)a1;
- (id)itemOrderingPropertiesForGroupingType:(long long)a0;
- (id)mediaItemAtIndex:(unsigned long long)a0;
- (id)mediaItemForIdentifier:(unsigned long long)a0;
- (long long)persistentIDAtIndex:(unsigned long long)a0;
- (BOOL)updatePlaylistCollectionsToLibraryCurrentRevision;
- (BOOL)updateToLibraryCurrentRevision;
- (BOOL)updateToLibraryCurrentRevisionInternal;

@end
