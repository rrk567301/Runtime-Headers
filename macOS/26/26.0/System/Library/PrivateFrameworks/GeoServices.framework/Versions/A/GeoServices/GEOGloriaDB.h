@class NSObject;
@protocol OS_os_log;

@interface GEOGloriaDB : NSObject {
    NSObject<OS_os_log> *_log;
    struct unique_ptr<gloria::DB, std::default_delete<gloria::DB>> { struct DB *__ptr_; } _db;
    struct TileId { unsigned long long tile_id_; unsigned char zoom_; } _rootTileId;
    Class _metadataClass;
    Class _dataClass;
}

- (id)initWithFileURL:(id)a0 rootQuadKey:(unsigned long long)a1 log:(id)a2;
- (BOOL)_unsafeDataForQuadKey:(unsigned long long)a0 ofType:(Class)a1 result:(id /* block */)a2;
- (BOOL)unsafeDataForQuadKeyNum:(id)a0 result:(id /* block */)a1;
- (id)rawDataForQuadKeyNum:(id)a0;
- (id)rawDataForQuadKey:(unsigned long long)a0;
- (id)_dataForQuadKey:(unsigned long long)a0 ofType:(Class)a1 requireAncestor:(BOOL)a2;
- (BOOL)unsafeMetadata:(id /* block */)a0;
- (BOOL)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 searchPattern:(unsigned long long)a2 visitor:(id /* block */)a3;
- (id)metadata;
- (BOOL)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 searchPattern:(unsigned long long)a2 zoom:(unsigned char)a3 visitor:(id /* block */)a4;
- (BOOL)containsQuadKey:(unsigned long long)a0;
- (id)initWithDBAccess:(struct shared_ptr<gloria::DbReader> { struct DbReader *x0; struct __shared_weak_count *x1; })a0 rootQuadKey:(unsigned long long)a1 metadataClass:(Class)a2 dataClass:(Class)a3 log:(id)a4;
- (id)initWithFileHandle:(id)a0 rootQuadKey:(unsigned long long)a1 log:(id)a2;
- (id)dataForQuadKey:(unsigned long long)a0;
- (id)initWithFileHandle:(id)a0 rootQuadKey:(unsigned long long)a1 metadataClass:(Class)a2 dataClass:(Class)a3 log:(id)a4;
- (id)dataForQuadKeyNum:(id)a0;
- (id).cxx_construct;
- (BOOL)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 searchPattern:(unsigned long long)a2 zoom:(unsigned char)a3 visitor:(id /* block */)a4;
- (id)initWithFileURL:(id)a0 rootQuadKey:(unsigned long long)a1 metadataClass:(Class)a2 dataClass:(Class)a3 log:(id)a4;
- (BOOL)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 searchPattern:(unsigned long long)a2 zoom:(unsigned char)a3 ifDifferentFrom:(id)a4 visitedQuadKeys:(id)a5 visitor:(id /* block */)a6;
- (BOOL)unsafeDataForQuadKey:(unsigned long long)a0 result:(id /* block */)a1;
- (BOOL)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 searchPattern:(unsigned long long)a2 zoom:(unsigned char)a3 ifDifferentFrom:(id)a4 visitedQuadKeys:(id)a5 visitor:(id /* block */)a6;
- (BOOL)containsQuadKeyNum:(id)a0;
- (void).cxx_destruct;
- (BOOL)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 searchPattern:(unsigned long long)a2 visitor:(id /* block */)a3;

@end
