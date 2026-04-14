@class NSArray, NSData;

@interface PFAAnyEventTypeStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; unsigned char messageCount : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageCount;
@property (copy, nonatomic) NSArray *eventStatistics;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)deleteAnyEventType;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addEventStatistics:(id)a0;
- (void)clearEventStatistics;
- (void)deleteEventStatistics;
- (void)deleteMessageCount;
- (id)eventStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventStatisticsCount;

@end
