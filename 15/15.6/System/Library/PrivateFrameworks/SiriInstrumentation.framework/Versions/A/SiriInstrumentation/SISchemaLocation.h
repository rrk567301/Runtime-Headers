@class NSData;

@interface SISchemaLocation : SISchemaInstrumentationMessage {
    struct { unsigned char latitude : 1; unsigned char longitude : 1; unsigned char horizontalAccuracyInMeters : 1; } _has;
}

@property (nonatomic) float latitude;
@property (nonatomic) char hasLatitude;
@property (nonatomic) float longitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) float horizontalAccuracyInMeters;
@property (nonatomic) char hasHorizontalAccuracyInMeters;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLongitude;
- (void)deleteHorizontalAccuracyInMeters;
- (void)deleteLatitude;
- (id)suppressMessageUnderConditions;

@end
