@class NSData;

@interface DIMSchemaEntitySyncSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isMediaEntitySyncEnabled : 1; } _has;
}

@property (nonatomic) char isMediaEntitySyncEnabled;
@property (nonatomic) char hasIsMediaEntitySyncEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsMediaEntitySyncEnabled;
- (id)suppressMessageUnderConditions;

@end
