@class NSData;

@interface SISchemaSendWithoutConfirmation : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; unsigned char isEnabledForHeadphones : 1; unsigned char isEnabledForCarPlay : 1; } _has;
}

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabledForHeadphones;
@property (nonatomic) BOOL hasIsEnabledForHeadphones;
@property (nonatomic) BOOL isEnabledForCarPlay;
@property (nonatomic) BOOL hasIsEnabledForCarPlay;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteIsEnabled;
- (void)deleteIsEnabledForHeadphones;
- (void)deleteIsEnabledForCarPlay;

@end
