@class NSString, PBDataReader, PBUnknownFields;

@interface GEORevealedPlaceCardModuleButton : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_metadata;
    NSString *_vendor;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _linkType;
    int _type;
    char _isGroup;
    struct { unsigned char has_linkType : 1; unsigned char has_type : 1; unsigned char has_isGroup : 1; unsigned char read_unknownFields : 1; unsigned char read_metadata : 1; unsigned char read_vendor : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasIsGroup;
@property (nonatomic) char isGroup;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSString *metadata;
@property (readonly, nonatomic) char hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (nonatomic) char hasLinkType;
@property (nonatomic) int linkType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (id)moduleButtonForType:(int)a0;

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
- (int)StringAsLinkType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)linkTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
