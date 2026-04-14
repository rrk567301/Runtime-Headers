@class NSString, NSArray, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerCitationInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subText;
@property (nonatomic) BOOL hasSubText;
@property (copy, nonatomic) NSArray *citationIndices;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addCitationIndices:(int)a0;
- (int)citationIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)citationIndicesCount;
- (void)clearCitationIndices;
- (void)deleteCitationIndices;
- (void)deleteSubText;

@end
