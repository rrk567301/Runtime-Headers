@class NSData;

@interface FLOWSchemaFLOWPhoneCallEmergencyContext : SISchemaInstrumentationMessage {
    struct { unsigned char emergencyCallType : 1; } _has;
}

@property (nonatomic) int emergencyCallType;
@property (nonatomic) char hasEmergencyCallType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEmergencyCallType;
- (id)suppressMessageUnderConditions;

@end
