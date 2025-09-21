@class NSData;

@interface FLOWSchemaFLOWPhoneCallEmergencyContext : SISchemaInstrumentationMessage {
    struct { unsigned char emergencyCallType : 1; } _has;
}

@property (nonatomic) int emergencyCallType;
@property (nonatomic) BOOL hasEmergencyCallType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteEmergencyCallType;

@end
