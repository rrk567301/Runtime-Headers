@class PFAPFADeviceDimensions, NSData;

@interface PFAPFAEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTimestampInMsSince1970 : 1; } _has;
}

@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) BOOL hasEventTimestampInMsSince1970;
@property (retain, nonatomic) PFAPFADeviceDimensions *deviceDimensions;
@property (nonatomic) BOOL hasDeviceDimensions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceDimensions;
- (void)deleteEventTimestampInMsSince1970;

@end
