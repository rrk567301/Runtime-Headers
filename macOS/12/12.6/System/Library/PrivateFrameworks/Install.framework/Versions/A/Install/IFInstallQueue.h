@class NSString, NSMutableArray, NSMutableDictionary;

@interface IFInstallQueue : NSObject {
    NSString *_queueDescription;
    NSString *_extraInfo;
    int _currentElementIndex;
    id _sessionID;
    NSMutableArray *_elements;
    NSMutableDictionary *_typeStats;
    id _clientMessagingDelegate;
    double _initialEstimatedTotalTime;
    double _timeForCompletedElements;
    double _totalProgress;
    double _lastProgress;
    BOOL _messageTimeEstimatedBasedProgress;
}

- (void)dealloc;
- (int)count;
- (BOOL)shouldContinue;
- (id)elementAtIndex:(int)a0;
- (void)addElement:(id)a0;
- (id)sessionID;
- (id)initWithSession:(id)a0;
- (void)setExtraInfo:(id)a0;
- (id)extraInfo;
- (id)queueDescription;
- (id)currentElement;
- (id)advanceToNextElement;
- (void)setClientMessagingDelegate:(id)a0;
- (void)setQueueDescription:(id)a0;
- (void)addElement:(id)a0 withType:(id)a1;
- (void)distributeProgress:(double)a0 forType:(id)a1;
- (void)distributeProgressWithTimeEstimates;
- (void)setPartialProgress:(double)a0;
- (void)_collectPerformanceWithElement:(id)a0;
- (int)indexOfCurrentElement;
- (id)_typeStats;
- (void)dumpPerformanceWithIndentLevel:(int)a0 withStatus:(long long)a1;
- (void)analyzeProgress;
- (void)dumpTypeStats;
- (id)typeStats;
- (double)initialEstimatedTotalTime;
- (void)sendClientStatusMessage:(id)a0 ofType:(id)a1;
- (void)sendClientError:(id)a0;

@end
