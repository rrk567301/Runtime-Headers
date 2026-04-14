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

- (BOOL)isAvailable;
- (id)initWithOperation:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isInteractive;
- (BOOL)isEnabled;
- (id)identifier;
- (void)setInteractive:(BOOL)a0;
- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (id)attributes;
- (id)settingsDictionary;
- (id)init;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)excludeFromAdjustmentsMenu;

@end
