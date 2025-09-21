@class NSArray, FLOWSchemaFLOWPhoneCallEmergencyContext, NSData, FLOWSchemaFLOWContact;

@interface FLOWSchemaFLOWPhoneCallContext : SISchemaInstrumentationMessage {
    struct { unsigned char phoneCallType : 1; unsigned char phoneCallAppType : 1; unsigned char isThirdPartyFaceTime : 1; unsigned char searchCallHistoryIntent : 1; unsigned char userPersona : 1; } _has;
}

@property (nonatomic) int phoneCallType;
@property (nonatomic) char hasPhoneCallType;
@property (copy, nonatomic) NSArray *recipientTypes;
@property (nonatomic) int phoneCallAppType;
@property (nonatomic) char hasPhoneCallAppType;
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallEmergencyContext *emergencyContext;
@property (nonatomic) char hasEmergencyContext;
@property (copy, nonatomic) NSArray *personTypes;
@property (nonatomic) char isThirdPartyFaceTime;
@property (nonatomic) char hasIsThirdPartyFaceTime;
@property (nonatomic) int searchCallHistoryIntent;
@property (nonatomic) char hasSearchCallHistoryIntent;
@property (nonatomic) int userPersona;
@property (nonatomic) char hasUserPersona;
@property (retain, nonatomic) FLOWSchemaFLOWContact *contact;
@property (nonatomic) char hasContact;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearPersonType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)personTypeCount;
- (void)addPersonType:(int)a0;
- (void)addRecipientType:(int)a0;
- (void)clearRecipientType;
- (void)deleteContact;
- (void)deleteEmergencyContext;
- (void)deleteIsThirdPartyFaceTime;
- (void)deletePersonType;
- (void)deletePhoneCallAppType;
- (void)deletePhoneCallType;
- (void)deleteRecipientType;
- (void)deleteSearchCallHistoryIntent;
- (void)deleteUserPersona;
- (int)personTypeAtIndex:(unsigned long long)a0;
- (int)recipientTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)recipientTypeCount;
- (id)suppressMessageUnderConditions;

@end
