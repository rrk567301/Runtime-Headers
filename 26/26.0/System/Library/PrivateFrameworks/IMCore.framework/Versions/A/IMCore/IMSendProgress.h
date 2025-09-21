@class NSTimer, NSDictionary;
@protocol IMSendProgressTimeDataSource, IMSendProgressDelegate;

@interface IMSendProgress : NSObject

@property (retain, nonatomic) id<IMSendProgressTimeDataSource> timeDataSource;
@property (retain, nonatomic) NSTimer *sendProgressTimer;
@property (nonatomic) float cachedSendProgress;
@property (nonatomic) BOOL wasShowing;
@property (nonatomic) double translationStartTime;
@property (weak, nonatomic) id<IMSendProgressDelegate> delegate;
@property (weak, nonatomic) id context;
@property (nonatomic) BOOL startSendProgressImmediately;
@property (copy, nonatomic) NSDictionary *sendingItems;
@property (nonatomic) BOOL waitingForComposition;

+ (Class)_timeDataSourceClass;

- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (double)_getEstimatedSendTimeOverStewieInSeconds;
- (BOOL)_hasSendingMessages;
- (void)_resetSendProgress;
- (unsigned long long)_sGetEstimatedNumberOfRetries:(unsigned long long)a0;
- (unsigned long long)_sGetNumberOfDataGrams:(unsigned long long)a0;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_sendProgressTimerFired:(id)a0;
- (void)_updateSendProgress;
- (id)initWithDelegate:(id)a0 context:(id)a1;
- (void)updateForItems:(id)a0 forced:(BOOL)a1;
- (void)updateForPendingComposition;

@end
