@class NSString, GEORPFeedbackFieldOptionAnnotations, NSMutableArray, PBDataReader;

@interface GEORPFeedbackFieldOption : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPFeedbackFieldOptionAnnotations *_annotations;
    NSString *_defaultText;
    NSString *_localizedText;
    NSMutableArray *_tags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _key;
    struct { unsigned char has_key : 1; unsigned char read_annotations : 1; unsigned char read_defaultText : 1; unsigned char read_localizedText : 1; unsigned char read_tags : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasKey;
@property (nonatomic) int key;
@property (readonly, nonatomic) char hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;
@property (readonly, nonatomic) char hasDefaultText;
@property (retain, nonatomic) NSString *defaultText;
@property (retain, nonatomic) NSMutableArray *tags;
@property (readonly, nonatomic) char hasAnnotations;
@property (retain, nonatomic) GEORPFeedbackFieldOptionAnnotations *annotations;

+ (Class)tagType;
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
- (int)StringAsKey:(id)a0;
- (id)keyAsString:(int)a0;
- (void)addTag:(id)a0;
- (void)clearTags;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)tagAtIndex:(unsigned long long)a0;
- (unsigned long long)tagsCount;

@end
