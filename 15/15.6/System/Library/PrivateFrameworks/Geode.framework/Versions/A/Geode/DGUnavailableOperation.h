@class NSDictionary, NSString;

@interface DGUnavailableOperation : DGOperation {
    NSDictionary *_settingsDictionary;
    NSDictionary *_attributes;
    NSString *_identifier;
}

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)identifier;
- (void)setEnabled:(char)a0;
- (id)initWithIdentifier:(id)a0;
- (char)isEnabled;
- (id)attributes;
- (id)initWithOperation:(id)a0;
- (char)isAvailable;
- (id)settingsDictionary;
- (void)setInteractive:(char)a0;
- (char)isInteractive;
- (char)applySettingsDictionary:(id)a0;
- (char)excludeFromAdjustmentsMenu;

@end
