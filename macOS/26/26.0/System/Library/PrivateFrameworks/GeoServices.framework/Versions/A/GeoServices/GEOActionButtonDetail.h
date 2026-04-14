@class NSString, PBDataReader, PBUnknownFields;

@interface GEOActionButtonDetail : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_category;
    NSString *_providerId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _linkType;
    BOOL _dropDown;
    struct { unsigned char has_linkType : 1; unsigned char has_dropDown : 1; unsigned char read_unknownFields : 1; unsigned char read_category : 1; unsigned char read_providerId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL hasProviderId;
@property (retain, nonatomic) NSString *providerId;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) int linkType;
@property (nonatomic) BOOL hasDropDown;
@property (nonatomic) BOOL dropDown;
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
- (int)StringAsLinkType:(id)a0;
- (id)linkTypeAsString:(int)a0;

@end
