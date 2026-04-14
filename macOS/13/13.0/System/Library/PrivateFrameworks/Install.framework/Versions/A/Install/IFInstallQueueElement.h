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

- (void)dealloc;
- (id)init;
- (long long)run;
- (id)type;
- (void)setType:(id)a0;
- (id)result;
- (void)setResult:(id)a0;
- (struct timeval { long long x0; int x1; })startTime;
- (double)weight;
- (void)setWeight:(double)a0;
- (void)stopTimer;
- (void)startTimer;
- (double)elapsedTime;
- (void)setSessionState:(id)a0;
- (id)logDescription;
- (double)estimatedTotalTime;
- (void)setCrashAtProgress:(id)a0;
- (void)setInstallElement:(id)a0;
- (void)setClientMessagingDelegate:(id)a0;
- (void)sendClientStatusMessage:(id)a0 ofType:(id)a1;
- (void)sendClientError:(id)a0;
- (void)setPartialProgress:(double)a0;
- (double)progressPart;
- (void)setProgressPart:(double)a0;
- (id)performanceInfo;
- (void)collectMemory;
- (id)clientMessagingDelegate;
- (BOOL)runAfterError;
- (id)artificialError;
- (void)_artificialCrashNow;

@end
