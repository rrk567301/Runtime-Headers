@class NSData;

@interface POMMESSchemaPOMMESPegasusQueryMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasLatitude : 1; unsigned char hasLongitude : 1; unsigned char hasCountryCode : 1; unsigned char hasStorefront : 1; unsigned char hasSiriLocale : 1; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasHasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasHasLongitude;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasHasCountryCode;
@property (nonatomic) BOOL hasStorefront;
@property (nonatomic) BOOL hasHasStorefront;
@property (nonatomic) BOOL hasSiriLocale;
@property (nonatomic) BOOL hasHasSiriLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasLatitude;
- (void)deleteHasLongitude;
- (void)deleteHasCountryCode;
- (void)deleteHasStorefront;
- (void)deleteHasSiriLocale;
- (id)suppressMessageUnderConditions;

@end
