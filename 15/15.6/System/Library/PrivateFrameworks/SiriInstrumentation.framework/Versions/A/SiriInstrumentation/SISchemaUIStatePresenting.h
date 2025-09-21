@class NSData;

@interface SISchemaUIStatePresenting : SISchemaInstrumentationMessage {
    struct { unsigned char presentationType : 1; } _has;
}

@property (nonatomic) int presentationType;
@property (nonatomic) char hasPresentationType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePresentationType;
- (id)suppressMessageUnderConditions;

@end
