@class NSString;

@interface TIAsteriskCorrectionMessageEvent : NSObject

@property (retain, nonatomic) NSString *messageText;
@property (retain) NSString *asteriskCorrectionType;
@property (retain) NSString *wordCountType;
@property BOOL prevMsgHasAutocorrections;
@property int wordsEnteredCount;
@property int finalWordsEnteredCount;
@property BOOL foundInAlignedSession;

- (void).cxx_destruct;
- (void)analyzeWordEntryAligned:(id)a0;
- (void)analyzeWordEntry:(id)a0;
- (BOOL)hasTextInWordEntry:(id)a0;
- (void)adjustEmojiCountsFromKeyboardInputForWordAligned:(id)a0;
- (BOOL)hasText:(id)a0;
- (id)initWithPrevMsgHasAutocorrections:(BOOL)a0;
- (void)assessAsteriskCorrection;
- (void)dispatchAsteriskEventWithFeatureUsageMetricsCache:(id)a0 andContext:(id)a1 assetAvailabilityStatus:(long long)a2;

@end
