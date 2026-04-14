@interface SiriGestureBridge.GestureClientController : NSObject <AFNotifyObserverDelegate, AFHearablesGestureObserver> {
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ sessionState;
    void /* unknown type, empty encoding */ announcementState;
    void /* unknown type, empty encoding */ gestureMapping;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ siriObserver;
    void /* unknown type, empty encoding */ activeGestureContexts;
    void /* unknown type, empty encoding */ headGestureManager;
    void /* unknown type, empty encoding */ readingAnnouncement;
    void /* unknown type, empty encoding */ announcingIncomingCall;
    void /* unknown type, empty encoding */ lastActionEventId;
    void /* unknown type, empty encoding */ promptedForConfirmation;
    void /* unknown type, empty encoding */ siriObserverQueue;
    void /* unknown type, empty encoding */ ttsActive;
    void /* unknown type, empty encoding */ audioSessionConfigured;
    void /* unknown type, empty encoding */ waitingForTTS;
    void /* unknown type, empty encoding */ requestActive;
    void /* unknown type, empty encoding */ isListening;
    void /* unknown type, empty encoding */ sessionActive;
}

@property (nonatomic) BOOL testTtsActive;
@property (nonatomic) BOOL testAudioSessionConfigured;
@property (nonatomic) BOOL testRequestActive;
@property (nonatomic) BOOL testIsListening;
@property (nonatomic) BOOL testSessionActive;
@property (nonatomic, readonly) BOOL testExpectingSiriXConfirmation;
@property (nonatomic, readonly) BOOL testExpectingSiriClassicConfirmation;
@property (nonatomic, readonly) BOOL testExpectingpommesConfirmation;

- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didRecognizeHeadGestureResponse:(id)a0;

@end
