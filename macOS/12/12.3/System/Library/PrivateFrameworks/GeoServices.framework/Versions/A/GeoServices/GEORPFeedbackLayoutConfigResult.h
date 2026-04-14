@class NSMutableArray;

@interface GEORPFeedbackLayoutConfigResult : PBCodable <NSCopying> {
    NSMutableArray *_forms;
}

@property (retain, nonatomic) NSMutableArray *forms;

+ (BOOL)isValid:(id)a0;
+ (Class)formType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)addForm:(id)a0;
- (unsigned long long)formsCount;
- (void)clearForms;
- (id)formAtIndex:(unsigned long long)a0;

@end
