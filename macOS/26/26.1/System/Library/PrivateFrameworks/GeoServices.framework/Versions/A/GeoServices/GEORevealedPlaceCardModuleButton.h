@class NSString, PBDataReader, PBUnknownFields;

@interface GEORevealedPlaceCardModuleButton : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_classification;
    NSString *_metadata;
    NSString *_vendor;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _linkType;
    int _type;
    BOOL _isGroup;
    struct { unsigned char has_linkType : 1; unsigned char has_type : 1; unsigned char has_isGroup : 1; unsigned char read_unknownFields : 1; unsigned char read_classification : 1; unsigned char read_metadata : 1; unsigned char read_vendor : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasIsGroup;
@property (nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSString *metadata;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) int linkType;
@property (readonly, nonatomic) BOOL hasClassification;
@property (retain, nonatomic) NSString *classification;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)moduleButtonForType:(int)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)typeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsType:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (int)StringAsLinkType:(id)a0;
- (id)linkTypeAsString:(int)a0;

@end
