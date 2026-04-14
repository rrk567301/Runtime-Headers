@class _TtC12SiriSharedUI25SiriSharedUIReplayUtility;

@interface SiriSharedUI.SiriSharedUIReplayUtility : NSObject {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ isReplaying;
    void /* unknown type, empty encoding */ didReplayRecently;
    void /* unknown type, empty encoding */ currentUtterance;
    void /* unknown type, empty encoding */ savedAceObjects;
    void /* unknown type, empty encoding */ storedCallback;
    void /* unknown type, empty encoding */ indexToReplayNext;
    void /* unknown type, empty encoding */ latestIndexReplayed;
    void /* unknown type, empty encoding */ viewHostingController;
    void /* unknown type, empty encoding */ resetReplayTask;
}

@property (class, nonatomic, readonly) _TtC12SiriSharedUI25SiriSharedUIReplayUtility *shared;

- (id)init;
- (void).cxx_destruct;
- (void)speechRecognized:(id)a0;
- (void)addReplayControlTo:(id)a0;
- (BOOL)hasContentAt:(struct CGPoint { double x0; double x1; })a0;
- (void)receivedWithCommand:(id)a0;
- (void)registerWithReplayCallback:(id /* block */)a0;
- (BOOL)shouldSkipAutoDismissal;

@end
