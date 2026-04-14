@class NSData;

@interface SISchemaUEIDictationEuclidAlternativesEvent : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; unsigned char alternativesIndexSelectedByUser : 1; } _has;
}

@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) long long alternativesIndexSelectedByUser;
@property (nonatomic) BOOL hasAlternativesIndexSelectedByUser;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventType;
- (void)deleteAlternativesIndexSelectedByUser;

@end
