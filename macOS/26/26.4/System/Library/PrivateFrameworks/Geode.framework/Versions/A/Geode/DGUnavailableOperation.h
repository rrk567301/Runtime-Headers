@class NSDictionary, NSString;

@interface DGUnavailableOperation : DGOperation {
    NSDictionary *_settingsDictionary;
    NSDictionary *_attributes;
    NSString *_identifier;
}

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (BOOL)isInteractive;
- (BOOL)isAvailable;
- (id)initWithOperation:(id)a0;
- (id)attributes;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)initWithIdentifier:(id)a0;
- (void)setInteractive:(BOOL)a0;
- (id)settingsDictionary;
- (id)init;
- (id)identifier;
- (void)dealloc;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)excludeFromAdjustmentsMenu;

@end
