@class NSArray, NSData, SISchemaUUID;

@interface PFAPreprocessorSessionStartStatsReported : SISchemaInstrumentationMessage {
    struct { unsigned char messageCount : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) char hasClockIdentifier;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) char hasMessageCount;
@property (copy, nonatomic) NSArray *anyEventTypeStatistics;
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
- (void)addAnyEventTypeStatistics:(id)a0;
- (id)anyEventTypeStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)anyEventTypeStatisticsCount;
- (void)clearAnyEventTypeStatistics;
- (void)deleteAnyEventTypeStatistics;
- (void)deleteClockIdentifier;
- (void)deleteMessageCount;
- (id)suppressMessageUnderConditions;

@end
