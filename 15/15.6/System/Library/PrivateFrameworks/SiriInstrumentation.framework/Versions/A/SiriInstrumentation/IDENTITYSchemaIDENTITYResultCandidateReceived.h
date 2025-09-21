@class NSString, NSData, IDENTITYSchemaIDENTITYIDScoreCard;

@interface IDENTITYSchemaIDENTITYResultCandidateReceived : SISchemaInstrumentationMessage {
    struct { unsigned char isSelected : 1; } _has;
}

@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (nonatomic) char isSelected;
@property (nonatomic) char hasIsSelected;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic) char hasIdentityScoreCard;
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
- (void)deleteIdentityScoreCard;
- (void)deleteIsSelected;
- (void)deleteResultCandidateId;
- (id)suppressMessageUnderConditions;

@end
