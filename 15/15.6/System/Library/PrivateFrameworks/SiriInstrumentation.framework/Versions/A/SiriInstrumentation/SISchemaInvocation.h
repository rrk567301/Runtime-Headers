@class SISchemaTapToEditInvocationContext, SISchemaTVRemoteInvocationContext, SISchemaUUID, NSData, SISchemaViewContainer, SISchemaCardSectionKeyboardInvocationContext, SISchemaHardwareButtonInvocationContext, SISchemaCarPlayInvocationContext, SISchemaVerticalLayoutCardSectionInvocationContext, SISchemaBluetoothCarInvocationContext;

@interface SISchemaInvocation : SISchemaInstrumentationMessage {
    struct { unsigned char invocationAction : 1; unsigned char invocationSource : 1; unsigned char isDeviceLocked : 1; } _has;
}

@property (nonatomic) int invocationAction;
@property (nonatomic) char hasInvocationAction;
@property (nonatomic) int invocationSource;
@property (nonatomic) char hasInvocationSource;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) char hasViewContainer;
@property (retain, nonatomic) SISchemaCarPlayInvocationContext *carPlayInvocationContext;
@property (nonatomic) char hasCarPlayInvocationContext;
@property (retain, nonatomic) SISchemaVerticalLayoutCardSectionInvocationContext *cardInvocationContext;
@property (nonatomic) char hasCardInvocationContext;
@property (retain, nonatomic) SISchemaTVRemoteInvocationContext *tvRemoteInvocationContext;
@property (nonatomic) char hasTvRemoteInvocationContext;
@property (retain, nonatomic) SISchemaCardSectionKeyboardInvocationContext *keyboardInvocationContext;
@property (nonatomic) char hasKeyboardInvocationContext;
@property (retain, nonatomic) SISchemaHardwareButtonInvocationContext *hardwareButtonInvocationContext;
@property (nonatomic) char hasHardwareButtonInvocationContext;
@property (retain, nonatomic) SISchemaBluetoothCarInvocationContext *bluetoothCarInvocationContext;
@property (nonatomic) char hasBluetoothCarInvocationContext;
@property (retain, nonatomic) SISchemaTapToEditInvocationContext *tapToEditContext;
@property (nonatomic) char hasTapToEditContext;
@property (nonatomic) char isDeviceLocked;
@property (nonatomic) char hasIsDeviceLocked;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichInvocationcontext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteKeyboardInvocationContext;
- (void)deleteTvRemoteInvocationContext;
- (void)deleteBluetoothCarInvocationContext;
- (void)deleteCarPlayInvocationContext;
- (void)deleteCardInvocationContext;
- (void)deleteHardwareButtonInvocationContext;
- (void)deleteInvocationAction;
- (void)deleteInvocationSource;
- (void)deleteIsDeviceLocked;
- (void)deleteLinkId;
- (void)deleteTapToEditContext;
- (void)deleteViewContainer;
- (id)suppressMessageUnderConditions;

@end
