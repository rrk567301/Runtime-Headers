@interface DGMuteOperation : DGOperation

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;

- (id)settingsDictionary;
- (BOOL)isMigratable;

@end
