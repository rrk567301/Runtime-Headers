@class NSData;

@interface SISchemaUEIDictationEuclidAlternativesEvent : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; unsigned char alternativesIndexSelectedByUser : 1; } _has;
}

@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) long long alternativesIndexSelectedByUser;
@property (nonatomic) BOOL hasAlternativesIndexSelectedByUser;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEventType;
- (void)deleteAlternativesIndexSelectedByUser;

@end
