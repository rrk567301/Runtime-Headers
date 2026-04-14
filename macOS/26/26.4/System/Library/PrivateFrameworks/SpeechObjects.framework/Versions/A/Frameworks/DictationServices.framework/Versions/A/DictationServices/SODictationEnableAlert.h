@class OBPrivacyPresenter;

@interface SODictationEnableAlert : NSAlert

@property (retain) OBPrivacyPresenter *privacyPresenter;

- (id)init;
- (void)dealloc;
- (void)_clickedDictationPrivacy:(id)a0;

@end
