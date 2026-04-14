@class NSData;

@interface SISchemaVoiceTriggerMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char implicitUtterances : 1; unsigned char explicitUtterances : 1; unsigned char firstPassTriggers : 1; } _has;
}

@property (nonatomic) int implicitUtterances;
@property (nonatomic) BOOL hasImplicitUtterances;
@property (nonatomic) int explicitUtterances;
@property (nonatomic) BOOL hasExplicitUtterances;
@property (nonatomic) int firstPassTriggers;
@property (nonatomic) BOOL hasFirstPassTriggers;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
