@class NSDictionary, NSString;

@interface DGUnavailableOperation : DGOperation {
    NSDictionary *_settingsDictionary;
    NSDictionary *_attributes;
    NSString *_identifier;
}

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (BOOL)isInteractive;
- (id)identifier;
- (void)dealloc;
- (BOOL)isEnabled;
- (id)initWithIdentifier:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setInteractive:(BOOL)a0;
- (id)init;
- (id)settingsDictionary;
- (id)attributes;
- (BOOL)isAvailable;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)excludeFromAdjustmentsMenu;

@end
