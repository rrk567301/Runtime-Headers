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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsEnabled;
- (void)deleteIsEnabledForCarPlay;
- (void)deleteIsEnabledForHeadphones;

@end
