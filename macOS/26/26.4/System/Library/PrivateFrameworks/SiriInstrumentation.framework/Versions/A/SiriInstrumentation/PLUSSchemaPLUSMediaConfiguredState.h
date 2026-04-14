@class NSData;

@interface PLUSSchemaPLUSMediaConfiguredState : SISchemaInstrumentationMessage {
    struct { unsigned char shadowLogging : 1; } _has;
}

@property (nonatomic) BOOL shadowLogging;
@property (nonatomic) BOOL hasShadowLogging;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteShadowLogging;

@end
