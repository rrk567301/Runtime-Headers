@class NSProgressIndicator, AFSettingsConnection;

@interface SiriUIDeleteSiriHistoryAlert : NSAlert

@property (readonly) BOOL requestSucceeded;
@property (weak) id defaultButtonTarget;
@property SEL defaultButtonAction;
@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain) NSProgressIndicator *progressIndicator;

- (void).cxx_destruct;
- (id)init;
- (void)_defaultButtonClicked:(id)a0;

@end
