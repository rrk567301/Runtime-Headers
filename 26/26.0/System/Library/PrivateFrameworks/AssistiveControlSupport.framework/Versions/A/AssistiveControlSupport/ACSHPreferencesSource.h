@class NSDictionary;

@interface ACSHPreferencesSource : NSObject

@property (copy, nonatomic) NSDictionary *_preferenceDefaults;

- (void)setPreferenceValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)copyPreferenceNumberForKey:(id)a0;
- (id)copyPreferenceStringForKey:(id)a0;
- (id)copyPreferenceValueForKey:(id)a0;
- (id)initWithPreferenceDefaults:(id)a0;

@end
