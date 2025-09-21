@class NSString, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantCarPlayDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char enhancedVoiceTriggerMode : 1; unsigned char directAction : 1; unsigned char carPlayConnection : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) char hasAssistantDimensions;
@property (copy, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) char hasVehicleManufacturer;
@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) char hasVehicleName;
@property (copy, nonatomic) NSString *vehicleModel;
@property (nonatomic) char hasVehicleModel;
@property (nonatomic) int enhancedVoiceTriggerMode;
@property (nonatomic) char hasEnhancedVoiceTriggerMode;
@property (nonatomic) int directAction;
@property (nonatomic) char hasDirectAction;
@property (nonatomic) int carPlayConnection;
@property (nonatomic) char hasCarPlayConnection;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAssistantDimensions;
- (void)deleteCarPlayConnection;
- (void)deleteDirectAction;
- (void)deleteEnhancedVoiceTriggerMode;
- (void)deleteVehicleManufacturer;
- (void)deleteVehicleModel;
- (void)deleteVehicleName;
- (id)suppressMessageUnderConditions;

@end
