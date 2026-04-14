@class SUGSchemaSUGAggregateCounts, NSData;

@interface SUGSchemaSUGUserStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char isTwoByThreeUser : 1; } _has;
}

@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalSiriRequests;
@property (nonatomic) BOOL hasTotalSiriRequests;
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalPreviousSuggestionsShown;
@property (nonatomic) BOOL hasTotalPreviousSuggestionsShown;
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalSiriHelpRequests;
@property (nonatomic) BOOL hasTotalSiriHelpRequests;
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalUniqueSiriEventTypes;
@property (nonatomic) BOOL hasTotalUniqueSiriEventTypes;
@property (nonatomic) BOOL isTwoByThreeUser;
@property (nonatomic) BOOL hasIsTwoByThreeUser;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTotalSiriRequests;
- (void)deleteTotalPreviousSuggestionsShown;
- (void)deleteTotalSiriHelpRequests;
- (void)deleteTotalUniqueSiriEventTypes;
- (void)deleteIsTwoByThreeUser;

@end
