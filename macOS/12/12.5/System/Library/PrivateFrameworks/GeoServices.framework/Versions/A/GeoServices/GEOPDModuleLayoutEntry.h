@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_applicationIds;
    NSString *_debugLayoutId;
    NSMutableArray *_modules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _platformType;
    struct { unsigned char has_platformType : 1; unsigned char read_unknownFields : 1; unsigned char read_applicationIds : 1; unsigned char read_debugLayoutId : 1; unsigned char read_modules : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *applicationIds;
@property (readonly, nonatomic) BOOL hasDebugLayoutId;
@property (retain, nonatomic) NSString *debugLayoutId;
@property (nonatomic) BOOL hasPlatformType;
@property (nonatomic) int platformType;
@property (retain, nonatomic) NSMutableArray *modules;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)applicationIdType;
+ (Class)modulesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addModules:(id)a0;
- (void)addApplicationId:(id)a0;
- (unsigned long long)applicationIdsCount;
- (void)clearApplicationIds;
- (id)applicationIdAtIndex:(unsigned long long)a0;
- (unsigned long long)modulesCount;
- (void)clearModules;
- (id)modulesAtIndex:(unsigned long long)a0;
- (id)platformTypeAsString:(int)a0;
- (int)StringAsPlatformType:(id)a0;

@end
