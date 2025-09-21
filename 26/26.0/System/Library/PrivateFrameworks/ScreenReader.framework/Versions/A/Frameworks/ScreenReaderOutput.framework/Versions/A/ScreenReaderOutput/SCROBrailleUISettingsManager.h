@interface SCROBrailleUISettingsManager : NSObject

@property (readonly, nonatomic) BOOL calculatorUsesUEBMath;
@property (nonatomic) unsigned long long liveCaptionsSource;
@property (nonatomic) long long brfReflowSize;
@property (nonatomic) BOOL isBRFWordWrapEnabled;

+ (id)sharedInstance;

- (BOOL)isAppleIntelligenceEnabled;
- (float)liveSpeechPitchForKeyboardID:(id)a0;
- (float)liveSpeechRateForKeyboardID:(id)a0;
- (BOOL)isBRFStripPageIndicatorsEnabled;
- (id)liveSpeechVoiceIDForKeyboardID:(id)a0;
- (unsigned long long)brailleNotesSortDirection;
- (unsigned long long)brailleNotesSortType;
- (id)enabledMainMenuItems;
- (BOOL)himsUsesDot7ForCommands;
- (BOOL)isBRFReflowEnabled;
- (BOOL)isReadListItemsEnabled;
- (BOOL)isTypingSpeechFeedbackEnabled;
- (BOOL)isVisualsEnabled;
- (BOOL)shouldReopenViewsWhenRestart;
- (BOOL)usesUnderlineCursor;
- (long long)zoomOutNumCellsPerElement;

@end
