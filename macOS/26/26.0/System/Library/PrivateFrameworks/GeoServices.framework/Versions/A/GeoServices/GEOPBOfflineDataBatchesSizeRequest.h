@class GEOMapRegion, NSMutableArray, PBDataReader;

@interface GEOPBOfflineDataBatchesSizeRequest : PBRequest <NSCopying> {
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

- (void)addSupportedLanguage:(id)a0;
- (id)initWithData:(id)a0;
- (Class)responseClass;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearSupportedLanguages;
- (id)dictionaryRepresentation;
- (unsigned long long)supportedLanguagesCount;
- (id)init;
- (id)supportedLanguageAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsLayers:(id)a0;
- (id)layersAsString:(int)a0;
- (void)addLayers:(int)a0;
- (void)clearLayers;
- (int)layersAtIndex:(unsigned long long)a0;
- (void)setLayers:(int *)a0 count:(unsigned long long)a1;

@end
