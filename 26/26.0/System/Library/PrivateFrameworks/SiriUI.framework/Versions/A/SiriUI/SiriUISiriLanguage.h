@class NSString;
@protocol SiriUISiriLanguageDelegate;

@interface SiriUISiriLanguage : NSObject

@property (readonly, weak, nonatomic, getter=_delegate) id<SiriUISiriLanguageDelegate> delegate;
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode;
@property (nonatomic) BOOL macBuddyChecked;
@property (nonatomic, getter=_isMacBuddyRunning) BOOL macBuddyRunning;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)_currentLocaleDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)a0;
- (void)_updateSpokenLanguageCode;

@end
