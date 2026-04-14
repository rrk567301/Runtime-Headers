@class NSData;

@interface GATSchemaGATFileMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char sizeInKB : 1; } _has;
}

@property (nonatomic) unsigned long long sizeInKB;
@property (nonatomic) BOOL hasSizeInKB;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteSizeInKB;

@end
