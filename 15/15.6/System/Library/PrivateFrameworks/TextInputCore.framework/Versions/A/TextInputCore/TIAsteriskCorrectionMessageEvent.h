@class NSString, TITypingSession, TITypingSessionAligned;

@interface TIAsteriskCorrectionMessageEvent : NSObject

@property (retain, nonatomic) NSString *messageText;
@property (retain, nonatomic) NSString *asteriskCorrectionType;
@property (retain, nonatomic) NSString *wordCountType;
@property (readonly) unsigned long long prevMsgAutocorrectionType;
@property (readonly) NSString *bundleId;
@property int wordsEnteredCount;
@property int finalWordsEnteredCount;
@property (retain) TITypingSession *messageSession;
@property (retain) TITypingSessionAligned *messageAlignedSession;

- (void).cxx_destruct;
- (void)adjustEmojiCountsFromKeyboardInputForWordAligned:(id)a0;
- (void)analyzeEvent;
- (void)analyzeWordEntry:(id)a0;
- (void)analyzeWordEntryAligned:(id)a0;
- (id)assessAsteriskCorrection;
- (void)dispatchAsteriskEventWithFeatureUsageMetricsCache:(id)a0 andContext:(id)a1 assetAvailabilityStatus:(long long)a2;
- (char)hasText:(id)a0;
- (char)hasTextInWordEntry:(id)a0;
- (id)initWithSession:(id)a0 andPrevMsgAutocorrectionType:(unsigned long long)a1 andBundleId:(id)a2;

@end
