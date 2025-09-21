@class PBDataReader, NSString, GEOPDModuleOptions, PBUnknownFields;

@interface GEOPDModule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_moduleDebugDescription;
    GEOPDModuleOptions *_options;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _moduleConfigurationIndex;
    int _type;
    struct { unsigned char has_moduleConfigurationIndex : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_moduleDebugDescription : 1; unsigned char read_options : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasOptions;
@property (retain, nonatomic) GEOPDModuleOptions *options;
@property (readonly, nonatomic) char hasModuleDebugDescription;
@property (retain, nonatomic) NSString *moduleDebugDescription;
@property (nonatomic) char hasModuleConfigurationIndex;
@property (nonatomic) int moduleConfigurationIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
