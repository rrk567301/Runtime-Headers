@class NSString;
@protocol SiriUISiriLanguageDelegate;

@interface SiriUISiriLanguage : NSObject

@property (readonly, weak, nonatomic, getter=_delegate) id<SiriUISiriLanguageDelegate> delegate;
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode;
@property (nonatomic) char macBuddyChecked;
@property (nonatomic, getter=_isMacBuddyRunning) char macBuddyRunning;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_currentLocaleDidChange:(id)a0;
- (id)_computeSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)a0;
- (void)_updateSpokenLanguageCode;

@end
