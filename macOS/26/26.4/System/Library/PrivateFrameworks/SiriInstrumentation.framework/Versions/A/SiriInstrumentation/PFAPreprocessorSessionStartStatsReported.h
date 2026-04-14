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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAnyEventTypeStatistics:(id)a0;
- (id)anyEventTypeStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)anyEventTypeStatisticsCount;
- (void)clearAnyEventTypeStatistics;
- (void)deleteAnyEventTypeStatistics;
- (void)deleteClockIdentifier;
- (void)deleteMessageCount;

@end
