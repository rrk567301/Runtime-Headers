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
@property (readonly, nonatomic) char hasDebugLayoutId;
@property (retain, nonatomic) NSString *debugLayoutId;
@property (nonatomic) char hasPlatformType;
@property (nonatomic) int platformType;
@property (retain, nonatomic) NSMutableArray *modules;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)applicationIdType;
+ (char)isValid:(id)a0;
+ (Class)modulesType;

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
- (int)StringAsPlatformType:(id)a0;
- (id)modulesAtIndex:(unsigned long long)a0;
- (void)addApplicationId:(id)a0;
- (void)addModules:(id)a0;
- (id)applicationIdAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationIdsCount;
- (void)clearApplicationIds;
- (void)clearModules;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)modulesCount;
- (id)platformTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
