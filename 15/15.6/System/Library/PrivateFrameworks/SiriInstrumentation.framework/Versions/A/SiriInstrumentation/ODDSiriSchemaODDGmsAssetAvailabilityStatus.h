@class NSData;

@interface ODDSiriSchemaODDGmsAssetAvailabilityStatus : SISchemaInstrumentationMessage {
    struct { unsigned char timestampInSecondsSince1970 : 1; unsigned char statusMessage : 1; } _has;
}

@property (nonatomic) unsigned long long timestampInSecondsSince1970;
@property (nonatomic) char hasTimestampInSecondsSince1970;
@property (nonatomic) unsigned long long statusMessage;
@property (nonatomic) char hasStatusMessage;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStatusMessage;
- (void)deleteTimestampInSecondsSince1970;
- (id)suppressMessageUnderConditions;

@end
