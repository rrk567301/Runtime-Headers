@class NSData;

@interface PLUSSchemaPLUSMediaContributingGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char entityFeedbackType : 1; } _has;
}

@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (nonatomic) int entityFeedbackType;
@property (nonatomic) char hasEntityFeedbackType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityFeedbackType;
- (void)deleteSource;
- (id)suppressMessageUnderConditions;

@end
