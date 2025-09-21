@class NSData;

@interface PLUSSchemaPLUSSuggestionMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char surfacedBeforeStatus : 1; } _has;
}

@property (nonatomic) int surfacedBeforeStatus;
@property (nonatomic) char hasSurfacedBeforeStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSurfacedBeforeStatus;
- (id)suppressMessageUnderConditions;

@end
