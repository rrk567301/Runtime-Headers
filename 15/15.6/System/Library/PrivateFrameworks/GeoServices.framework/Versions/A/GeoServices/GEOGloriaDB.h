@class NSObject;
@protocol OS_os_log;

@interface GEOGloriaDB : NSObject {
    NSObject<OS_os_log> *_log;
    struct unique_ptr<gloria::DB, std::default_delete<gloria::DB>> { struct __compressed_pair<gloria::DB *, std::default_delete<gloria::DB>> { struct DB *__value_; } __ptr_; } _db;
    struct TileId { unsigned long long tile_id_; unsigned char zoom_; } _rootTileId;
    Class _metadataClass;
    Class _dataClass;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)metadata;
- (id)dataForQuadKey:(unsigned long long)a0;
- (char)unsafeMetadata:(id /* block */)a0;
- (char)unsafeDataForQuadKeyNum:(id)a0 result:(id /* block */)a1;
- (id)_dataForQuadKey:(unsigned long long)a0 ofType:(Class)a1;
- (char)_unsafeDataForQuadKey:(unsigned long long)a0 ofType:(Class)a1 result:(id /* block */)a2;
- (char)containsQuadKey:(unsigned long long)a0;
- (char)containsQuadKeyNum:(id)a0;
- (id)dataForQuadKeyNum:(id)a0;
- (char)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 visitor:(id /* block */)a2;
- (id)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 zoom:(unsigned char)a2 ifDifferentFrom:(id)a3 visitor:(id /* block */)a4;
- (char)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 zoom:(unsigned char)a2 visitor:(id /* block */)a3;
- (id)initWithDBAccess:(struct shared_ptr<gloria::DbReader> { struct DbReader *x0; struct __shared_weak_count *x1; })a0 rootQuadKey:(unsigned long long)a1 metadataClass:(Class)a2 dataClass:(Class)a3 log:(id)a4;
- (id)initWithFileHandle:(id)a0 rootQuadKey:(unsigned long long)a1 log:(id)a2;
- (id)initWithFileHandle:(id)a0 rootQuadKey:(unsigned long long)a1 metadataClass:(Class)a2 dataClass:(Class)a3 log:(id)a4;
- (id)initWithFileURL:(id)a0 rootQuadKey:(unsigned long long)a1 log:(id)a2;
- (id)initWithFileURL:(id)a0 rootQuadKey:(unsigned long long)a1 metadataClass:(Class)a2 dataClass:(Class)a3 log:(id)a4;
- (char)unsafeDataForQuadKey:(unsigned long long)a0 result:(id /* block */)a1;
- (char)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 visitor:(id /* block */)a2;
- (id)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 zoom:(unsigned char)a2 ifDifferentFrom:(id)a3 visitor:(id /* block */)a4;
- (char)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 zoom:(unsigned char)a2 visitor:(id /* block */)a3;

@end
