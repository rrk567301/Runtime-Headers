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
- (void)setEnabled:(BOOL)a0;
- (id)identifier;
- (BOOL)isEnabled;
- (id)initWithIdentifier:(id)a0;
- (id)attributes;
- (id)initWithOperation:(id)a0;
- (BOOL)isAvailable;
- (id)settingsDictionary;
- (void)setInteractive:(BOOL)a0;
- (BOOL)isInteractive;
- (BOOL)excludeFromAdjustmentsMenu;
- (BOOL)applySettingsDictionary:(id)a0;

@end
