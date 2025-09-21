@class NSData;

@interface SISchemaUEIDictationEuclidAlternativesEvent : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; unsigned char alternativesIndexSelectedByUser : 1; } _has;
}

@property (nonatomic) int eventType;
@property (nonatomic) char hasEventType;
@property (nonatomic) long long alternativesIndexSelectedByUser;
@property (nonatomic) char hasAlternativesIndexSelectedByUser;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventType;
- (void)deleteAlternativesIndexSelectedByUser;
- (id)suppressMessageUnderConditions;

@end
