@interface UniversalControl.UniversalControlPreferencesImpl : UniversalControl.PreferencesController <UVCPreferencesTestability>

@property (nonatomic) char enabled;
@property (nonatomic) char magicEdgesEnabled;
@property (nonatomic, readonly) char supported;
@property (nonatomic) char automation;

@end
