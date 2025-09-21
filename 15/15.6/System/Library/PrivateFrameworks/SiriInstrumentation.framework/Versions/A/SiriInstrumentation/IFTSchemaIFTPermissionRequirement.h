@class NSData;

@interface IFTSchemaIFTPermissionRequirement : SISchemaInstrumentationMessage

@property (nonatomic) char siriPermissionRequired;
@property (nonatomic) char hasSiriPermissionRequired;
@property (nonatomic) char shortcutsPermissionRequired;
@property (nonatomic) char hasShortcutsPermissionRequired;
@property (nonatomic) char preciseLocationPermissionRequired;
@property (nonatomic) char hasPreciseLocationPermissionRequired;
@property (nonatomic) char locationPermissionRequired;
@property (nonatomic) char hasLocationPermissionRequired;
@property (nonatomic) char wifiPermissionRequired;
@property (nonatomic) char hasWifiPermissionRequired;
@property (nonatomic) char bluetoothPermissionRequired;
@property (nonatomic) char hasBluetoothPermissionRequired;
@property (nonatomic) char photosPermissionRequired;
@property (nonatomic) char hasPhotosPermissionRequired;
@property (nonatomic) char contactsPermissionRequired;
@property (nonatomic) char hasContactsPermissionRequired;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Permissionrequirement;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBluetoothPermissionRequired;
- (void)deleteContactsPermissionRequired;
- (void)deleteLocationPermissionRequired;
- (void)deletePhotosPermissionRequired;
- (void)deletePreciseLocationPermissionRequired;
- (void)deleteShortcutsPermissionRequired;
- (void)deleteSiriPermissionRequired;
- (void)deleteWifiPermissionRequired;
- (id)suppressMessageUnderConditions;

@end
