@class SISchemaTapToEditInvocationContext, SISchemaTVRemoteInvocationContext, SISchemaUUID, SISchemaTypeToSiriInvocationContext, NSData, SISchemaViewContainer, SISchemaCardSectionKeyboardInvocationContext, SISchemaHardwareButtonInvocationContext, SISchemaCarPlayInvocationContext, SISchemaVerticalLayoutCardSectionInvocationContext, SISchemaBluetoothCarInvocationContext;

@interface SISchemaInvocation : SISchemaInstrumentationMessage {
    struct { unsigned char invocationAction : 1; unsigned char invocationSource : 1; unsigned char isDeviceLocked : 1; } _has;
}

@property (nonatomic) int invocationAction;
@property (nonatomic) BOOL hasInvocationAction;
@property (nonatomic) int invocationSource;
@property (nonatomic) BOOL hasInvocationSource;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) BOOL hasViewContainer;
@property (retain, nonatomic) SISchemaCarPlayInvocationContext *carPlayInvocationContext;
@property (nonatomic) BOOL hasCarPlayInvocationContext;
@property (retain, nonatomic) SISchemaVerticalLayoutCardSectionInvocationContext *cardInvocationContext;
@property (nonatomic) BOOL hasCardInvocationContext;
@property (retain, nonatomic) SISchemaTVRemoteInvocationContext *tvRemoteInvocationContext;
@property (nonatomic) BOOL hasTvRemoteInvocationContext;
@property (retain, nonatomic) SISchemaCardSectionKeyboardInvocationContext *keyboardInvocationContext;
@property (nonatomic) BOOL hasKeyboardInvocationContext;
@property (retain, nonatomic) SISchemaHardwareButtonInvocationContext *hardwareButtonInvocationContext;
@property (nonatomic) BOOL hasHardwareButtonInvocationContext;
@property (retain, nonatomic) SISchemaBluetoothCarInvocationContext *bluetoothCarInvocationContext;
@property (nonatomic) BOOL hasBluetoothCarInvocationContext;
@property (retain, nonatomic) SISchemaTapToEditInvocationContext *tapToEditContext;
@property (nonatomic) BOOL hasTapToEditContext;
@property (retain, nonatomic) SISchemaTypeToSiriInvocationContext *typeToSiriContext;
@property (nonatomic) BOOL hasTypeToSiriContext;
@property (nonatomic) BOOL isDeviceLocked;
@property (nonatomic) BOOL hasIsDeviceLocked;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichInvocationcontext;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteTvRemoteInvocationContext;
- (void)deleteKeyboardInvocationContext;
- (void)deleteBluetoothCarInvocationContext;
- (void)deleteCarPlayInvocationContext;
- (void)deleteCardInvocationContext;
- (void)deleteHardwareButtonInvocationContext;
- (void)deleteInvocationAction;
- (void)deleteInvocationSource;
- (void)deleteIsDeviceLocked;
- (void)deleteLinkId;
- (void)deleteTapToEditContext;
- (void)deleteTypeToSiriContext;
- (void)deleteViewContainer;

@end
