@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEORevealedPlaceCardModuleTypeShowcase : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_buttons;
    NSString *_showcaseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_buttons : 1; unsigned char read_showcaseId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasShowcaseId;
@property (retain, nonatomic) NSString *showcaseId;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)buttonsType;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithData:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (id)buttonsAtIndex:(unsigned long long)a0;
- (void)addButtons:(id)a0;
- (unsigned long long)buttonsCount;
- (void)clearButtons;

@end
