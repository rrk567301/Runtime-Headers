@interface SASettingGetCellularData : SASettingGetBool

+ (id)getCellularData;
+ (id)getCellularDataWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
