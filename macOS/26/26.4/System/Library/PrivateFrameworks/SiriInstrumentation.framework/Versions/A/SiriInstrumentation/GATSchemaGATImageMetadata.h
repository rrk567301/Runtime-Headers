@class NSData;

@interface GATSchemaGATImageMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char sizeInKB : 1; } _has;
}

@property (nonatomic) unsigned long long sizeInKB;
@property (nonatomic) BOOL hasSizeInKB;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSizeInKB;

@end
