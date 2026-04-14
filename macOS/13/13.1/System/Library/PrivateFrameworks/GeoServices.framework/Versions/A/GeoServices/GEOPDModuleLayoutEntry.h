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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearApplicationIds;
- (void)addApplicationId:(id)a0;
- (unsigned long long)applicationIdsCount;
- (id)applicationIdAtIndex:(unsigned long long)a0;
- (id)platformTypeAsString:(int)a0;
- (int)StringAsPlatformType:(id)a0;
- (void)clearModules;
- (void)addModules:(id)a0;
- (unsigned long long)modulesCount;
- (id)modulesAtIndex:(unsigned long long)a0;

@end
