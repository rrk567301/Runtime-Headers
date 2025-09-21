@class NSError;

@interface ML3DAAPImportOperation : ML3ImportOperation {
    void *_importSession;
    NSError *_importError;
    struct shared_ptr<DAAPParserDelegate> { struct DAAPParserDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _delegate;
    unsigned char _updateType;
    long long _totalTrackCount;
    long long _totalContainerCount;
    long long _totalAlbumCount;
    long long _totalArtistCount;
    long long _processedTrackCount;
    long long _processedContainerCount;
    long long _processedArtistCount;
    long long _processedAlbumCount;
    BOOL _importSessionStarted;
    BOOL _clientInitiatedReset;
    int _sourceType;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)_getTrackSource;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })albumImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (void)_finishParsingWithError:(id)a0;
- (char)_importDAAPPayloadFromFile:(id)a0;
- (char)_importDAAPPayloadFromFile:(id)a0 entityType:(int)a1;
- (char)_preprocessDAAPPayloadFromFile:(id)a0 entityType:(int)a1;
- (char)_processAlbumArtistFromArtistElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (char)_processAlbumCount:(int)a0;
- (char)_processAlbumFromAlbumElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (char)_processAlbumFromTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 importItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })a1 albumArtistPersistentID:(long long)a2;
- (char)_processArtistCount:(int)a0;
- (char)_processArtistFromTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 importItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })a1 albumArtistPersistentID:(long long *)a2;
- (char)_processContainerElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x0; void *x1; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x0; } x2; })a2;
- (char)_processContainerItemCount:(int)a0;
- (char)_processDeletedAlbumId:(const void *)a0;
- (char)_processDeletedArtistId:(const void *)a0;
- (char)_processDeletedContainerId:(long long)a0;
- (char)_processDeletedTrackId:(long long)a0;
- (char)_processPersonElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (char)_processTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (char)_processTrackImportItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })a0;
- (char)_processTrackItemCount:(int)a0;
- (char)_processUpdateType:(unsigned char)a0;
- (char)_startImportSessionIfNeeded;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })_trackImportItemWithTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })albumArtistImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ML3DAAPDeleteImportItem> { struct ML3DAAPDeleteImportItem *x0; struct __shared_weak_count *x1; })albumArtistItemFromDeletedDAAPArtistEntity:(const void *)a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })albumImportItemFromDAAPTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ML3DAAPDeleteImportItem> { struct ML3DAAPDeleteImportItem *x0; struct __shared_weak_count *x1; })albumItemFromDeletedDAAPAlbumEntity:(const void *)a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })artistImportItemFromDAAPTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 artistEntityType:(long long)a1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x0; void *x1; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x0; } x2; })a2;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (char)performImportOfSourceType:(int)a0 usingConnection:(id)a1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })personImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (void)updateImportProgress:(float)a0;

@end
