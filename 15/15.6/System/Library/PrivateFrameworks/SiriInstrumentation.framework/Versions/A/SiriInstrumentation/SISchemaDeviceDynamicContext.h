@class SISchemaLocation, NSString, NSData;

@interface SISchemaDeviceDynamicContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeIntervalSince1970 : 1; } _has;
}

@property (retain, nonatomic) SISchemaLocation *location;
@property (nonatomic) char hasLocation;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) char hasCountryCode;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) char hasTimeIntervalSince1970;
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
- (void)deleteCountryCode;
- (void)deleteLocation;
- (void)deleteTimeIntervalSince1970;
- (id)suppressMessageUnderConditions;

@end
