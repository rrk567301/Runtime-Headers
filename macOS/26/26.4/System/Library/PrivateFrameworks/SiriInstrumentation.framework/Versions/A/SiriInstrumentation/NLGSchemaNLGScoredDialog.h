@class NSString, NSData;

@interface NLGSchemaNLGScoredDialog : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (copy, nonatomic) NSString *catFamily;
@property (nonatomic) BOOL hasCatFamily;
@property (copy, nonatomic) NSString *catIdentifier;
@property (nonatomic) BOOL hasCatIdentifier;
@property (copy, nonatomic) NSString *scoredDialogIdentifier;
@property (nonatomic) BOOL hasScoredDialogIdentifier;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCatFamily;
- (void)deleteCatIdentifier;
- (void)deleteScore;
- (void)deleteScoredDialogIdentifier;

@end
