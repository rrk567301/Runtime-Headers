@class NSString;
@protocol SiriUISiriLanguageDelegate;

@interface SiriUISiriLanguage : NSObject

@property (readonly, weak, nonatomic, getter=_delegate) id<SiriUISiriLanguageDelegate> delegate;
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode;
@property (nonatomic) BOOL macBuddyChecked;
@property (nonatomic, getter=_isMacBuddyRunning) BOOL macBuddyRunning;

- (void).cxx_destruct;
- (void)_currentLocaleDidChange:(id)a0;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (id)_computeSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)a0;
- (void)_updateSpokenLanguageCode;

@end
