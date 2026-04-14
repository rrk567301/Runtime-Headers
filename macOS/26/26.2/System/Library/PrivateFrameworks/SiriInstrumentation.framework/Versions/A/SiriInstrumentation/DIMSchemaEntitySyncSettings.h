@class NSData;

@interface DIMSchemaEntitySyncSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isMediaEntitySyncEnabled : 1; } _has;
}

@property (nonatomic) BOOL isMediaEntitySyncEnabled;
@property (nonatomic) BOOL hasIsMediaEntitySyncEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsMediaEntitySyncEnabled;

@end
