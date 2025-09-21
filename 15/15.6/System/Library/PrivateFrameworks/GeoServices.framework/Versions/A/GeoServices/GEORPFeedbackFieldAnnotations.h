@class GEORPFeedbackTextListField, GEORPFeedbackTextField, PBDataReader;

@interface GEORPFeedbackFieldAnnotations : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPFeedbackTextField *_translatedTextField;
    GEORPFeedbackTextListField *_translatedTextListField;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_translatedTextField : 1; unsigned char read_translatedTextListField : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasTranslatedTextField;
@property (retain, nonatomic) GEORPFeedbackTextField *translatedTextField;
@property (readonly, nonatomic) char hasTranslatedTextListField;
@property (retain, nonatomic) GEORPFeedbackTextListField *translatedTextListField;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
