@interface SASettingGetBluetooth : SASettingGetBool

+ (id)getBluetooth;
+ (id)getBluetoothWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
