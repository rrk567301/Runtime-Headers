@class NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {
    NSMutableArray *_layoutFields;
    int _formType;
    unsigned int _radius;
    unsigned int _ttl;
    char _enabled;
    struct { unsigned char has_formType : 1; unsigned char has_radius : 1; unsigned char has_ttl : 1; unsigned char has_enabled : 1; } _flags;
}

@property (nonatomic) char hasTtl;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) char hasFormType;
@property (nonatomic) int formType;
@property (retain, nonatomic) NSMutableArray *layoutFields;
@property (nonatomic) char hasEnabled;
@property (nonatomic) char enabled;
@property (nonatomic) char hasRadius;
@property (nonatomic) unsigned int radius;

+ (Class)layoutFieldType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFormType:(id)a0;
- (void)addLayoutField:(id)a0;
- (void)clearLayoutFields;
- (id)formTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)layoutFieldAtIndex:(unsigned long long)a0;
- (unsigned long long)layoutFieldsCount;
- (void)readAll:(char)a0;

@end
