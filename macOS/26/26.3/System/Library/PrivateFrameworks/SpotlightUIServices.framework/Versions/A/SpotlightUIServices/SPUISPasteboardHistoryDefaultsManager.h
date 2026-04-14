@interface SPUISPasteboardHistoryDefaultsManager : NSObject {
    void /* unknown type, empty encoding */ currentVersion;
}

@property (class, nonatomic, readonly) SPUISPasteboardHistoryDefaultsManager *shared;

@property (nonatomic) long long historyTimeout;
@property (nonatomic) BOOL isContinuityEnabled;
@property (nonatomic) BOOL isFTEEngaged;
@property (nonatomic) BOOL isPasteboardHistoryEnabled;
@property (nonatomic) long long pasteboardHistorySettingsVersion;
@property (nonatomic, readonly) BOOL isEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)addContinuitySettingObserver:(id)a0 selector:(SEL)a1;
- (void)addHistoryTimeoutSettingObserver:(id)a0 selector:(SEL)a1;
- (void)addPasteboardHistoryEnabledSettingObserver:(id)a0 selector:(SEL)a1;
- (void)addPastebordFTEEngagedObserver:(id)a0 selector:(SEL)a1;
- (void)addRequestToDeletePasteboardHistoryObserver:(id)a0 selector:(SEL)a1;

@end
