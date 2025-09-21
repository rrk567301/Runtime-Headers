@class NSData;

@interface QDSchemaQDToolboxSizeReported : SISchemaInstrumentationMessage {
    struct { unsigned char totalToolCount : 1; } _has;
}

@property (nonatomic) unsigned int totalToolCount;
@property (nonatomic) char hasTotalToolCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTotalToolCount;
- (id)suppressMessageUnderConditions;

@end
