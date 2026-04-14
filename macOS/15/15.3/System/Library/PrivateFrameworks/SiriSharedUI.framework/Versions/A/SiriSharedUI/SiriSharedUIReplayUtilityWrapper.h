@interface SiriSharedUIReplayUtilityWrapper : NSObject

+ (id)sharedInstance;

- (void)speechRecognized:(id)a0;
- (void)receivedCommand:(id)a0;
- (void)addReplayControlTo:(id)a0;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)registerReplayCallback:(id /* block */)a0;
- (BOOL)shouldSkipAutoDismissal;

@end
