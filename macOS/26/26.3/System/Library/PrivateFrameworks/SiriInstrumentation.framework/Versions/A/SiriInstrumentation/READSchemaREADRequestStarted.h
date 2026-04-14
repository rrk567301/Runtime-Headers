@class NSData;

@interface READSchemaREADRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char trigger : 1; } _has;
}

@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasTrigger;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteTrigger;

@end
