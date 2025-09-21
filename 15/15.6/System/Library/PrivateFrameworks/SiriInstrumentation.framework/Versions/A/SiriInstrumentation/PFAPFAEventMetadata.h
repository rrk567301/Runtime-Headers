@class PFAPFADeviceDimensions, NSData;

@interface PFAPFAEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTimestampInMsSince1970 : 1; } _has;
}

@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) char hasEventTimestampInMsSince1970;
@property (retain, nonatomic) PFAPFADeviceDimensions *deviceDimensions;
@property (nonatomic) char hasDeviceDimensions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDeviceDimensions;
- (void)deleteEventTimestampInMsSince1970;
- (id)suppressMessageUnderConditions;

@end
