@interface TVISSettingsToggleOption : TVISSettingsOption

@property (readonly, nonatomic) char onState;

- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 localizedDescription:(id)a2 isActive:(char)a3 onState:(char)a4 disabled:(char)a5;

@end
