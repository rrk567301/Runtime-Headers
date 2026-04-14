@interface DGMuteOperation : DGOperation

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;

- (id)settingsDictionary;
- (BOOL)isMigratable;

@end
