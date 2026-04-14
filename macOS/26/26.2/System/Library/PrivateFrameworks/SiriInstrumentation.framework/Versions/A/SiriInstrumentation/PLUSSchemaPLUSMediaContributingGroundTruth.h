@class NSData;

@interface PLUSSchemaPLUSMediaContributingGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char entityFeedbackType : 1; } _has;
}

@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int entityFeedbackType;
@property (nonatomic) BOOL hasEntityFeedbackType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteEntityFeedbackType;
- (void)deleteSource;

@end
