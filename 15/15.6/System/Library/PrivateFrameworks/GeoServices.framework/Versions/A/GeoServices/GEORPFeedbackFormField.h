@class NSString, GEORPFeedbackFormFieldAnnotations, GEORPFeedbackFieldValue, NSMutableArray, PBDataReader;

@interface GEORPFeedbackFormField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPFeedbackFormFieldAnnotations *_annotations;
    NSString *_fieldId;
    NSString *_formId;
    NSString *_parentFieldId;
    NSMutableArray *_tags;
    GEORPFeedbackFieldValue *_value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _name;
    struct { unsigned char has_name : 1; unsigned char read_annotations : 1; unsigned char read_fieldId : 1; unsigned char read_formId : 1; unsigned char read_parentFieldId : 1; unsigned char read_tags : 1; unsigned char read_value : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasName;
@property (nonatomic) int name;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) GEORPFeedbackFieldValue *value;
@property (readonly, nonatomic) char hasFormId;
@property (retain, nonatomic) NSString *formId;
@property (readonly, nonatomic) char hasFieldId;
@property (retain, nonatomic) NSString *fieldId;
@property (readonly, nonatomic) char hasParentFieldId;
@property (retain, nonatomic) NSString *parentFieldId;
@property (retain, nonatomic) NSMutableArray *tags;
@property (readonly, nonatomic) char hasAnnotations;
@property (retain, nonatomic) GEORPFeedbackFormFieldAnnotations *annotations;

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
- (int)StringAsName:(id)a0;
- (void)addTag:(id)a0;
- (void)clearTags;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)nameAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)tagAtIndex:(unsigned long long)a0;
- (unsigned long long)tagsCount;

@end
