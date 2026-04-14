@class NSArray, NSData, LRSchemaLRPreprocessorInfo;

@interface LRSchemaLRRedactionSummaryReported : SISchemaInstrumentationMessage {
    struct { unsigned char hasRedactedEvents : 1; unsigned char summaryCreationTimeSince1970 : 1; unsigned char messageCreationTimeSince1970 : 1; } _has;
}

@property (nonatomic) BOOL hasRedactedEvents;
@property (nonatomic) BOOL hasHasRedactedEvents;
@property (copy, nonatomic) NSArray *redactionWindows;
@property (copy, nonatomic) NSArray *redactionSignals;
@property (nonatomic) unsigned long long summaryCreationTimeSince1970;
@property (nonatomic) BOOL hasSummaryCreationTimeSince1970;
@property (retain, nonatomic) LRSchemaLRPreprocessorInfo *preProcessorInfo;
@property (nonatomic) BOOL hasPreProcessorInfo;
@property (nonatomic) double messageCreationTimeSince1970;
@property (nonatomic) BOOL hasMessageCreationTimeSince1970;
@property (copy, nonatomic) NSArray *dataClassificationManifests;
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
- (void)addDataClassificationManifests:(id)a0;
- (void)addRedactionSignals:(id)a0;
- (void)addRedactionWindows:(id)a0;
- (void)clearDataClassificationManifests;
- (void)clearRedactionSignals;
- (void)clearRedactionWindows;
- (id)dataClassificationManifestsAtIndex:(unsigned long long)a0;
- (unsigned long long)dataClassificationManifestsCount;
- (void)deleteDataClassificationManifests;
- (void)deleteHasRedactedEvents;
- (void)deleteMessageCreationTimeSince1970;
- (void)deletePreProcessorInfo;
- (void)deleteRedactionSignals;
- (void)deleteRedactionWindows;
- (void)deleteSummaryCreationTimeSince1970;
- (id)redactionSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)redactionSignalsCount;
- (id)redactionWindowsAtIndex:(unsigned long long)a0;
- (unsigned long long)redactionWindowsCount;

@end
