@class NSString, NSArray, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerCitationInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subText;
@property (nonatomic) char hasSubText;
@property (copy, nonatomic) NSArray *citationIndices;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addCitationIndices:(int)a0;
- (int)citationIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)citationIndicesCount;
- (void)clearCitationIndices;
- (void)deleteCitationIndices;
- (void)deleteSubText;
- (id)suppressMessageUnderConditions;

@end
