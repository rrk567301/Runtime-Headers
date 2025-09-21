@class NSData;

@interface SISchemaHardwareButtonInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char hardwareButtonLongPressBehavior : 1; unsigned char hardwareButtonActivationThresholdInSec : 1; } _has;
}

@property (nonatomic) int hardwareButtonLongPressBehavior;
@property (nonatomic) char hasHardwareButtonLongPressBehavior;
@property (nonatomic) float hardwareButtonActivationThresholdInSec;
@property (nonatomic) char hasHardwareButtonActivationThresholdInSec;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHardwareButtonActivationThresholdInSec;
- (void)deleteHardwareButtonLongPressBehavior;
- (id)suppressMessageUnderConditions;

@end
