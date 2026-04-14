@class NSString, CIMPreferences;

@interface CIMPreferencesModule : NSPreferencesModule

@property (retain, nonatomic) id notificationObserver;
@property (copy, nonatomic) NSString *inputSourceIdentifier;
@property (copy, nonatomic) id /* block */ updateKeyboardLayoutPreviewBlock;
@property (readonly, nonatomic) CIMPreferences *preferences;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddToPreferencePane;

@end
