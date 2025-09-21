@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOCategory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_alias;
    long long _geoOntologyId;
    NSMutableArray *_localizedNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _level;
    struct { unsigned char has_geoOntologyId : 1; unsigned char read_unknownFields : 1; unsigned char read_alias : 1; unsigned char read_localizedNames : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *alias;
@property (nonatomic) int level;
@property (nonatomic) char hasGeoOntologyId;
@property (nonatomic) long long geoOntologyId;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)localizedNamesType;

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
- (void)addLocalizedNames:(id)a0;
- (void)clearLocalizedNames;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithPlaceDataCategory:(id)a0;
- (id)jsonRepresentation;
- (id)localizedNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedNamesCount;
- (void)readAll:(char)a0;

@end
