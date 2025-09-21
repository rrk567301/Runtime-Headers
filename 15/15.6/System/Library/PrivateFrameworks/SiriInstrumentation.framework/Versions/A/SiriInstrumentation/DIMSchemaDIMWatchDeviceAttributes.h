@class NSData;

@interface DIMSchemaDIMWatchDeviceAttributes : SISchemaInstrumentationMessage {
    struct { unsigned char isSatellitePaired : 1; unsigned char watchArmOrientation : 1; } _has;
}

@property (nonatomic) char isSatellitePaired;
@property (nonatomic) char hasIsSatellitePaired;
@property (nonatomic) int watchArmOrientation;
@property (nonatomic) char hasWatchArmOrientation;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSatellitePaired;
- (void)deleteWatchArmOrientation;
- (id)suppressMessageUnderConditions;

@end
