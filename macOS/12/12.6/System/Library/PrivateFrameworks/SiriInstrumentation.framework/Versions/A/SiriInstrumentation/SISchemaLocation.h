@class NSData;

@interface SISchemaLocation : SISchemaInstrumentationMessage {
    struct { unsigned char latitude : 1; unsigned char longitude : 1; unsigned char horizontalAccuracyInMeters : 1; } _has;
}

@property (nonatomic) float latitude;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) float longitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) float horizontalAccuracyInMeters;
@property (nonatomic) BOOL hasHorizontalAccuracyInMeters;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLatitude;
- (void)deleteLongitude;
- (void)deleteHorizontalAccuracyInMeters;
- (id)suppressMessageUnderConditions;

@end
