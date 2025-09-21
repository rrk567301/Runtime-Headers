@class NSString, HCHuffmanCoder, TITypingSessionAligned, NSArray, TITypingSession, NSLock;
@protocol TIDPReportingDelegate;

@interface TIDPRecorder : NSObject {
    NSLock *_delegateLock;
    NSLock *_primaryLexiconLock;
    NSLock *_secondaryLexiconLock;
}

@property (readonly, nonatomic) NSString *primaryInputModeLocaleIndentifier;
@property (readonly, nonatomic) NSString *secondaryInputModeLocaleIdentifier;
@property (readonly, nonatomic) NSString *recordingKeyLocaleSubstring;
@property (readonly) struct _LXLexicon { } *lexiconPrimaryInputMode;
@property (readonly) struct _LXLexicon { } *lexiconSecondaryInputMode;
@property (readonly, nonatomic) HCHuffmanCoder *characterCoder;
@property (readonly, nonatomic) HCHuffmanCoder *wordCoder;
@property (readonly, nonatomic) TITypingSession *typingSession;
@property (readonly, nonatomic) TITypingSessionAligned *typingSessionAligned;
@property (readonly, nonatomic) NSString *recordingKey;
@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) NSArray *characterExplodedRecords;
@property (retain, nonatomic) id<TIDPReportingDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (char)report;
- (void)_prepareCharacterCoderMatchingSession;
- (void)_prepareWordCoderMatchingSession;
- (id)initWithTypingSession:(id)a0 aligned:(id)a1;
- (char)isWordEntryReallyOOV:(id)a0 caseSensitive:(char)a1;

@end
