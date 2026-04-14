@interface UINSApplicationSettingsTextFieldNode : UINSApplicationSettingsDefaultsSettingsNode

@property (readonly, nonatomic, getter=isSecure) BOOL secure;

- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;
- (void)_copyIvarsToNewInstance:(id)a0;

@end
