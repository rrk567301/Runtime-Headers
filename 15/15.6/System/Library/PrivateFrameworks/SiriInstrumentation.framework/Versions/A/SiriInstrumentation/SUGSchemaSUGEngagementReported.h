@class SUGSchemaSUGUserStatistics, SUGSchemaSUGInteraction, NSData;

@interface SUGSchemaSUGEngagementReported : SISchemaInstrumentationMessage {
    struct { unsigned char performedTimeSince1970InMs : 1; } _has;
}

@property (nonatomic) unsigned long long performedTimeSince1970InMs;
@property (nonatomic) char hasPerformedTimeSince1970InMs;
@property (retain, nonatomic) SUGSchemaSUGUserStatistics *userStatistics;
@property (nonatomic) char hasUserStatistics;
@property (retain, nonatomic) SUGSchemaSUGInteraction *interaction;
@property (nonatomic) char hasInteraction;
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
- (void)deleteInteraction;
- (void)deletePerformedTimeSince1970InMs;
- (void)deleteUserStatistics;
- (id)suppressMessageUnderConditions;

@end
