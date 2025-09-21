@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonLabel;
    NSString *_descriptionText;
    NSString *_titleText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _buttonEnabled;
    struct { unsigned char has_buttonEnabled : 1; unsigned char read_unknownFields : 1; unsigned char read_buttonLabel : 1; unsigned char read_descriptionText : 1; unsigned char read_titleText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasButtonLabel;
@property (retain, nonatomic) NSString *buttonLabel;
@property (nonatomic) char hasButtonEnabled;
@property (nonatomic) char buttonEnabled;
@property (readonly, nonatomic) char hasTitleText;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) char hasDescriptionText;
@property (retain, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)businessClaimForPlaceData:(id)a0;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
