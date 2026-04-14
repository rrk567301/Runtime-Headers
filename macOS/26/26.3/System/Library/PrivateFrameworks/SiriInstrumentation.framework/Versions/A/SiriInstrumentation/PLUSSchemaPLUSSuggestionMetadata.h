@class NSData;

@interface PLUSSchemaPLUSSuggestionMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char surfacedBeforeStatus : 1; } _has;
}

@property (nonatomic) int surfacedBeforeStatus;
@property (nonatomic) BOOL hasSurfacedBeforeStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteSurfacedBeforeStatus;

@end
