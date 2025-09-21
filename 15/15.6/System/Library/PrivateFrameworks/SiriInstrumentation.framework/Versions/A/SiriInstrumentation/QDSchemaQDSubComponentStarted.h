@class NSData;

@interface QDSchemaQDSubComponentStarted : SISchemaInstrumentationMessage {
    struct { unsigned char subComponent : 1; } _has;
}

@property (nonatomic) int subComponent;
@property (nonatomic) char hasSubComponent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSubComponent;
- (id)suppressMessageUnderConditions;

@end
