@interface SPUISPasteboardHistoryDefaultsManager : NSObject

@property (class, nonatomic, readonly) SPUISPasteboardHistoryDefaultsManager *shared;

@property (nonatomic) long long historyTimeout;
@property (nonatomic) BOOL isContinuityEnabled;
@property (nonatomic) BOOL isFTEEngaged;
@property (nonatomic, readonly) BOOL isEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)addContinuitySettingObserver:(id)a0 selector:(SEL)a1;
- (void)addHistoryTimeoutSettingObserver:(id)a0 selector:(SEL)a1;
- (void)addPastebordFTEEngagedObserver:(id)a0 selector:(SEL)a1;

@end
