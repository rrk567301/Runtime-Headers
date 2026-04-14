@interface DGMuteOperation : DGOperation

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;

- (id)settingsDictionary;
- (BOOL)isMigratable;

@end
