@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemMapsSyncAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_mapsSyncIdentifier;
    NSString *_mapsSyncObjectType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _secondaryObjectType;
    struct { unsigned char has_secondaryObjectType : 1; unsigned char read_unknownFields : 1; unsigned char read_mapsSyncIdentifier : 1; unsigned char read_mapsSyncObjectType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapsSyncIdentifier;
@property (retain, nonatomic) NSString *mapsSyncIdentifier;
@property (readonly, nonatomic) BOOL hasMapsSyncObjectType;
@property (retain, nonatomic) NSString *mapsSyncObjectType;
@property (nonatomic) BOOL hasSecondaryObjectType;
@property (nonatomic) int secondaryObjectType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsSecondaryObjectType:(id)a0;
- (id)secondaryObjectTypeAsString:(int)a0;

@end
