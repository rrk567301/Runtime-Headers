@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_shieldColor;
    NSString *_shieldText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _shieldEnumValue;
    struct { unsigned char has_shieldEnumValue : 1; unsigned char read_unknownFields : 1; unsigned char read_shieldColor : 1; unsigned char read_shieldText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasShieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (nonatomic) char hasShieldEnumValue;
@property (nonatomic) unsigned int shieldEnumValue;
@property (readonly, nonatomic) char hasShieldColor;
@property (retain, nonatomic) NSString *shieldColor;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
