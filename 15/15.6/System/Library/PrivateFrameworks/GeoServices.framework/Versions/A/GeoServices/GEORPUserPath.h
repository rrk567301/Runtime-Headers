@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORPUserPath : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _nativePaths;
    NSMutableArray *_webPaths;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_nativePaths : 1; unsigned char read_webPaths : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long nativePathsCount;
@property (readonly, nonatomic) int *nativePaths;
@property (retain, nonatomic) NSMutableArray *webPaths;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)webPathType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNativePaths:(id)a0;
- (id)webPathAtIndex:(unsigned long long)a0;
- (void)addNativePath:(int)a0;
- (void)addWebPath:(id)a0;
- (void)clearNativePaths;
- (void)clearUnknownFields:(char)a0;
- (void)clearWebPaths;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (int)nativePathAtIndex:(unsigned long long)a0;
- (id)nativePathsAsString:(int)a0;
- (void)readAll:(char)a0;
- (void)setNativePaths:(int *)a0 count:(unsigned long long)a1;
- (unsigned long long)webPathsCount;

@end
