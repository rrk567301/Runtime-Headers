@class IFInstallElement, NSString, IFSessionState, NSError, NSNumber, IFPerformanceElement;

@interface IFInstallQueueElement : NSObject {
    NSString *_type;
    double _weight;
    IFSessionState *_sessionState;
    IFInstallElement *_installElement;
    id _clientMessagingDelegate;
    NSError *_result;
    long long _resultStatus;
    IFPerformanceElement *_perf;
    NSNumber *_crashAtProgress;
}

+ (BOOL)canRunForPackage:(id)a0;

- (double)elapsedTime;
- (double)weight;
- (void)setWeight:(double)a0;
- (id)result;
- (id)logDescription;
- (void)stopTimer;
- (void)dealloc;
- (void)startTimer;
- (long long)run;
- (struct timeval { long long x0; int x1; })startTime;
- (id)type;
- (id)init;
- (void)setResult:(id)a0;
- (void)setType:(id)a0;
- (void)setSessionState:(id)a0;
- (void)_artificialCrashNow;
- (id)performanceInfo;
- (id)artificialError;
- (void)sendClientStatusMessage:(id)a0 ofType:(id)a1;
- (id)clientMessagingDelegate;
- (void)collectMemory;
- (double)estimatedTotalTime;
- (double)progressPart;
- (BOOL)runAfterError;
- (void)sendClientError:(id)a0;
- (void)setClientMessagingDelegate:(id)a0;
- (void)setCrashAtProgress:(id)a0;
- (void)setInstallElement:(id)a0;
- (void)setPartialProgress:(double)a0;
- (void)setProgressPart:(double)a0;

@end
