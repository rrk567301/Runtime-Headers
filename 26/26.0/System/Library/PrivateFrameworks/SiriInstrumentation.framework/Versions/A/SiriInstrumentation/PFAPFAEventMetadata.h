@class PFAPFADeviceDimensions, NSData;

@interface PFAPFAEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTimestampInMsSince1970 : 1; } _has;
}

@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) BOOL hasEventTimestampInMsSince1970;
@property (retain, nonatomic) PFAPFADeviceDimensions *deviceDimensions;
@property (nonatomic) BOOL hasDeviceDimensions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteDeviceDimensions;
- (void)deleteEventTimestampInMsSince1970;

@end
