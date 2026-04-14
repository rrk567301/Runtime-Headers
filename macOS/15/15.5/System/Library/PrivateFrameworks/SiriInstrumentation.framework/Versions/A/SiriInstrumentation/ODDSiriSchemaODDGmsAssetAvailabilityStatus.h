@class NSData;

@interface ODDSiriSchemaODDGmsAssetAvailabilityStatus : SISchemaInstrumentationMessage {
    struct { unsigned char timestampInSecondsSince1970 : 1; unsigned char statusMessage : 1; } _has;
}

@property (nonatomic) unsigned long long timestampInSecondsSince1970;
@property (nonatomic) BOOL hasTimestampInSecondsSince1970;
@property (nonatomic) unsigned long long statusMessage;
@property (nonatomic) BOOL hasStatusMessage;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStatusMessage;
- (void)deleteTimestampInSecondsSince1970;
- (id)suppressMessageUnderConditions;

@end
