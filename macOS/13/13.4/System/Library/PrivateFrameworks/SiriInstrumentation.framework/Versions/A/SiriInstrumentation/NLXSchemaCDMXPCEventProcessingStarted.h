@class NSData;

@interface NLXSchemaCDMXPCEventProcessingStarted : SISchemaInstrumentationMessage {
    struct { unsigned char processingType : 1; } _has;
}

@property (nonatomic) int processingType;
@property (nonatomic) BOOL hasProcessingType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProcessingType;
- (id)suppressMessageUnderConditions;

@end
