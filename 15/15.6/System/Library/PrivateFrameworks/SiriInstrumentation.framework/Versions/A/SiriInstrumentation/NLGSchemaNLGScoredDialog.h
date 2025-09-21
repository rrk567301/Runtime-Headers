@class NSString, NSData;

@interface NLGSchemaNLGScoredDialog : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (copy, nonatomic) NSString *catFamily;
@property (nonatomic) char hasCatFamily;
@property (copy, nonatomic) NSString *catIdentifier;
@property (nonatomic) char hasCatIdentifier;
@property (copy, nonatomic) NSString *scoredDialogIdentifier;
@property (nonatomic) char hasScoredDialogIdentifier;
@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCatFamily;
- (void)deleteCatIdentifier;
- (void)deleteScore;
- (void)deleteScoredDialogIdentifier;
- (id)suppressMessageUnderConditions;

@end
