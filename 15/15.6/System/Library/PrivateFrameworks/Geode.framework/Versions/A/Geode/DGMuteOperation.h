@interface DGMuteOperation : DGOperation

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (id)settingsDictionary;
- (char)isMigratable;

@end
