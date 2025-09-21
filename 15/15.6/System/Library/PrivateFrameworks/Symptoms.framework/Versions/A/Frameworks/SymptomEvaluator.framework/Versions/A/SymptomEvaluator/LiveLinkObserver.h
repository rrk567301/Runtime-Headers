@class NSString, NSDate, NSObject, TCPProgressProbe;
@protocol OS_dispatch_source;

@interface LiveLinkObserver : NSObject {
    int notifyToken;
    TCPProgressProbe *_tcpProgressProbe;
    NSDate *_timeOfProbeStart;
    NSObject<OS_dispatch_source> *progressProbeTimer;
    unsigned long long _iter;
    char _localFlowsDisabled;
    char _localFlowsEnabled;
}

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) unsigned long long tcpProgressScore;
@property (readonly, nonatomic) char premiumModeEnabled;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (char)startTracking;
- (char)stopTracking;
- (unsigned long long)_assessProgressFromBaseline:(struct nstat_progress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a0 toMetrics:(struct nstat_progress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a1;
- (void)_captureProgressWithInterval:(unsigned long long)a0 capWindowTo:(unsigned long long)a1;
- (char)attemptStartProgressProbe;
- (char)disableLocalFlowsTracking;
- (void)disablePremiumMode;
- (char)enableLocalFlowsTracking;
- (void)enablePremiumMode;
- (void)postHasAdviceNotification:(char)a0;
- (void)startProgressProbeTimerWithInterval:(unsigned long long)a0 capWindowTo:(unsigned long long)a1;
- (void)stopProgressProbeTimer;

@end
