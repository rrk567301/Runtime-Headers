@class NSData;

@interface POMMESSchemaPOMMESPegasusRequestGeoAppResolutionReported : SISchemaInstrumentationMessage {
    struct { unsigned char geoAppResolutionType : 1; } _has;
}

@property (nonatomic) int geoAppResolutionType;
@property (nonatomic) BOOL hasGeoAppResolutionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteGeoAppResolutionType;

@end
