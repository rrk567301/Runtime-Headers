@class NSDictionary, NSString;

@interface DGUnavailableOperation : DGOperation {
    NSDictionary *_settingsDictionary;
    NSDictionary *_attributes;
    NSString *_identifier;
}

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (BOOL)isEnabled;
- (BOOL)isAvailable;
- (BOOL)isInteractive;
- (id)initWithIdentifier:(id)a0;
- (id)identifier;
- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (id)attributes;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (void)setInteractive:(BOOL)a0;
- (void)dealloc;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)excludeFromAdjustmentsMenu;

@end
