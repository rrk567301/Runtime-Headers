@class NSData;

@interface READSchemaREADRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char trigger : 1; } _has;
}

@property (nonatomic) int trigger;
@property (nonatomic) char hasTrigger;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTrigger;
- (id)suppressMessageUnderConditions;

@end
