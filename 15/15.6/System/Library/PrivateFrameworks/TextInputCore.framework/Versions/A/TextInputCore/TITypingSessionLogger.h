@class NSString, NSMutableArray;
@protocol TIKeyboardInteractionProtocol;

@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionObserver> {
    id<TIKeyboardInteractionProtocol> _savedSession;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSMutableArray *typingEvents;
@property (readonly) unsigned long long eventCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptingCandidateWithTrigger:(id)a0;
- (void)changingContextWithTrigger:(id)a0;
- (void)sendTo:(id)a0;
- (void)addDrawInputWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;
- (void)addKeyInput:(id)a0 keyboardState:(id)a1;
- (void)addTouchEvent:(id)a0;
- (void)analyzeSessionWithSessionParams:(id)a0;
- (void)candidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(char)a5 useCandidateSelection:(char)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;
- (void)candidatesOffered:(id)a0 keyboardState:(id)a1;
- (void)contextDidChange:(id)a0 wordDelete:(char)a1 cursorMoved:(char)a2 extendsPriorWord:(char)a3 inWord:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6 keyboardState:(id)a7;
- (void)endSessionWithTimestamp:(id)a0;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;
- (id)logDetailsForKeyboardState:(id)a0;
- (void)saveRecording;
- (id)savedSession;
- (void)setClientID:(id)a0 keyboardState:(id)a1;
- (char)shouldPrintEvent:(id)a0;
- (void)startSessionWithTimestamp:(id)a0;
- (id)temporaryKeyboardsDirectory;

@end
