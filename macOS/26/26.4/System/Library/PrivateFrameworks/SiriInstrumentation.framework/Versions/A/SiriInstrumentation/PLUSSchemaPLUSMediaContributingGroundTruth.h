@class NSData;

@interface PLUSSchemaPLUSMediaContributingGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char entityFeedbackType : 1; } _has;
}

@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int entityFeedbackType;
@property (nonatomic) BOOL hasEntityFeedbackType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityFeedbackType;
- (void)deleteSource;

@end
