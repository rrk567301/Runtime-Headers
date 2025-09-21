@class NSString, _OSLogChunkFileReference, _OSLogChunkStore;

@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable> {
    _OSLogChunkFileReference *_cfr;
    _OSLogChunkStore *_cs;
    unsigned char _bootu[16];
    char _timespanDetermined;
    unsigned long long _cot_header;
    unsigned long long _cot;
    unsigned long long _cet;
}

@property (readonly, nonatomic) const char *bootUUID;
@property (readonly, nonatomic) char *path;
@property (readonly, nonatomic) unsigned long long oldestTime;
@property (readonly, nonatomic) unsigned long long endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_loadCatalogMetadataForTimespan;
- (char)_determineTimespan;
- (char)_loadHeaderMetadata:(id)a0;
- (id)copyMappedChunkStore:(id *)a0;
- (id)initWithChunkStore:(id)a0 error:(id *)a1;
- (id)initWithTraceFile:(id)a0 error:(id *)a1;

@end
