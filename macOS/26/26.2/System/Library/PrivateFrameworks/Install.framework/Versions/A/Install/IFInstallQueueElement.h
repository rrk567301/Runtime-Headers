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
- (void)setWeight:(double)a0;
- (void)setSessionState:(id)a0;
- (void)startTimer;
- (void)setResult:(id)a0;
- (void)setType:(id)a0;
- (long long)run;
- (id)type;
- (id)logDescription;
- (id)init;
- (double)weight;
- (void)stopTimer;
- (id)result;
- (struct timeval { long long x0; int x1; })startTime;
- (void)dealloc;
- (id)performanceInfo;
- (id)artificialError;
- (void)_artificialCrashNow;
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
