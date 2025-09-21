@class NSProgressIndicator, AFSettingsConnection;

@interface SiriUIDeleteSiriHistoryAlert : NSAlert

@property (readonly) char requestSucceeded;
@property (weak) id defaultButtonTarget;
@property SEL defaultButtonAction;
@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain) NSProgressIndicator *progressIndicator;

- (id)init;
- (void).cxx_destruct;
- (void)_defaultButtonClicked:(id)a0;

@end
