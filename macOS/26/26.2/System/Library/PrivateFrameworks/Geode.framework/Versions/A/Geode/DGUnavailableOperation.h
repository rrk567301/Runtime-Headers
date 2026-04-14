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

- (id)identifier;
- (id)attributes;
- (BOOL)isInteractive;
- (id)initWithOperation:(id)a0;
- (BOOL)isAvailable;
- (void)setEnabled:(BOOL)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEnabled;
- (id)settingsDictionary;
- (id)init;
- (void)setInteractive:(BOOL)a0;
- (void)dealloc;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)excludeFromAdjustmentsMenu;

@end
