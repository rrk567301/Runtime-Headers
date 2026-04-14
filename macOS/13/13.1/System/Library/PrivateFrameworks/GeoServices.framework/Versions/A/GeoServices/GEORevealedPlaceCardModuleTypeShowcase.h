@class NSString, NSMutableArray, PBDataReader;

@interface GEORevealedPlaceCardModuleTypeShowcase : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_buttons;
    NSString *_showcaseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_buttons : 1; unsigned char read_showcaseId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasShowcaseId;
@property (retain, nonatomic) NSString *showcaseId;
@property (retain, nonatomic) NSMutableArray *buttons;

+ (BOOL)isValid:(id)a0;
+ (Class)buttonsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearButtons;
- (unsigned long long)buttonsCount;
- (void)addButtons:(id)a0;
- (id)buttonsAtIndex:(unsigned long long)a0;

@end
