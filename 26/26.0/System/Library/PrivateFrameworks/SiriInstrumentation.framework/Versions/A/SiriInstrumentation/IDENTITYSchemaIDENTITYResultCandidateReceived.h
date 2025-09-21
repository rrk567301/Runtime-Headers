@class NSString, NSData, IDENTITYSchemaIDENTITYIDScoreCard;

@interface IDENTITYSchemaIDENTITYResultCandidateReceived : SISchemaInstrumentationMessage {
    struct { unsigned char isSelected : 1; } _has;
}

@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL hasIsSelected;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic) BOOL hasIdentityScoreCard;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIdentityScoreCard;
- (void)deleteIsSelected;
- (void)deleteResultCandidateId;

@end
