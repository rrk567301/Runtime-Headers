@class NSArray, NSData;

@interface LRSchemaLRRedactionSummaryReported : SISchemaInstrumentationMessage {
    struct { unsigned char hasRedactedEvents : 1; } _has;
}

@property (nonatomic) BOOL hasRedactedEvents;
@property (nonatomic) BOOL hasHasRedactedEvents;
@property (copy, nonatomic) NSArray *redactionWindows;
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
- (void)deleteHasRedactedEvents;
- (void)clearRedactionWindows;
- (void)deleteRedactionWindows;
- (void)addRedactionWindows:(id)a0;
- (unsigned long long)redactionWindowsCount;
- (id)redactionWindowsAtIndex:(unsigned long long)a0;

@end
