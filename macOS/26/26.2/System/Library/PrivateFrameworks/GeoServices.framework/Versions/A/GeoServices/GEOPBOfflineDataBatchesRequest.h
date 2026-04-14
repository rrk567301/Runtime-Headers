@class GEOMapRegion, NSMutableArray, PBDataReader;

@interface GEOPBOfflineDataBatchesRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _layers;
    unsigned long long _clientVersionModifier;
    GEOMapRegion *_region;
    NSMutableArray *_supportedLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_clientVersionModifier : 1; unsigned char read_layers : 1; unsigned char read_region : 1; unsigned char read_supportedLanguages : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRegion;
@property (retain, nonatomic) GEOMapRegion *region;
@property (retain, nonatomic) NSMutableArray *supportedLanguages;
@property (readonly, nonatomic) unsigned long long layersCount;
@property (readonly, nonatomic) int *layers;
@property (nonatomic) BOOL hasClientVersionModifier;
@property (nonatomic) unsigned long long clientVersionModifier;

+ (BOOL)isValid:(id)a0;
+ (Class)supportedLanguageType;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)supportedLanguageAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSupportedLanguage:(id)a0;
- (unsigned long long)supportedLanguagesCount;
- (void)copyTo:(id)a0;
- (void)clearSupportedLanguages;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)init;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (unsigned int)requestTypeCode;
- (void)dealloc;
- (int)StringAsLayers:(id)a0;
- (id)layersAsString:(int)a0;
- (void)addLayers:(int)a0;
- (void)clearLayers;
- (int)layersAtIndex:(unsigned long long)a0;
- (void)setLayers:(int *)a0 count:(unsigned long long)a1;

@end
