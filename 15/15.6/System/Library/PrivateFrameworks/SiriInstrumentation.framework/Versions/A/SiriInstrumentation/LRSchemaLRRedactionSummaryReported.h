@class NSArray, NSData, LRSchemaLRPreprocessorInfo;

@interface LRSchemaLRRedactionSummaryReported : SISchemaInstrumentationMessage {
    struct { unsigned char hasRedactedEvents : 1; unsigned char summaryCreationTimeSince1970 : 1; unsigned char messageCreationTimeSince1970 : 1; } _has;
}

@property (nonatomic) char hasRedactedEvents;
@property (nonatomic) char hasHasRedactedEvents;
@property (copy, nonatomic) NSArray *redactionWindows;
@property (copy, nonatomic) NSArray *redactionSignals;
@property (nonatomic) unsigned long long summaryCreationTimeSince1970;
@property (nonatomic) char hasSummaryCreationTimeSince1970;
@property (retain, nonatomic) LRSchemaLRPreprocessorInfo *preProcessorInfo;
@property (nonatomic) char hasPreProcessorInfo;
@property (nonatomic) double messageCreationTimeSince1970;
@property (nonatomic) char hasMessageCreationTimeSince1970;
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
- (void)addRedactionSignals:(id)a0;
- (void)addRedactionWindows:(id)a0;
- (void)clearRedactionSignals;
- (void)clearRedactionWindows;
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
- (id)suppressMessageUnderConditions;

@end
