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
    char _dropDown;
    struct { unsigned char has_linkType : 1; unsigned char has_dropDown : 1; unsigned char read_unknownFields : 1; unsigned char read_category : 1; unsigned char read_providerId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCategory;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) char hasProviderId;
@property (retain, nonatomic) NSString *providerId;
@property (nonatomic) char hasLinkType;
@property (nonatomic) int linkType;
@property (nonatomic) char hasDropDown;
@property (nonatomic) char dropDown;
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
- (int)StringAsLinkType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)linkTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
