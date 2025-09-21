@class NSArray, NSData, SISchemaUUID;

@interface PFAPreprocessorSessionStartStatsReported : SISchemaInstrumentationMessage {
    struct { unsigned char messageCount : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageCount;
@property (copy, nonatomic) NSArray *anyEventTypeStatistics;
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
- (void)addAnyEventTypeStatistics:(id)a0;
- (id)anyEventTypeStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)anyEventTypeStatisticsCount;
- (void)clearAnyEventTypeStatistics;
- (void)deleteAnyEventTypeStatistics;
- (void)deleteClockIdentifier;
- (void)deleteMessageCount;

@end
