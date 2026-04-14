@class NSDictionary, NSTimer;
@protocol IMSendProgressTimeDataSource, IMSendProgressDelegate;

@interface IMSendProgress : NSObject

@property (copy, nonatomic) NSDictionary *sendingItems;
@property (retain, nonatomic) id<IMSendProgressTimeDataSource> timeDataSource;
@property (retain, nonatomic) NSTimer *sendProgressTimer;
@property (nonatomic) float cachedSendProgress;
@property (nonatomic) BOOL wasShowing;
@property (weak, nonatomic) id<IMSendProgressDelegate> delegate;
@property (weak, nonatomic) id context;
@property (nonatomic) BOOL startSendProgressImmediately;

+ (Class)_timeDataSourceClass;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_sendProgressTimerFired:(id)a0;
- (id)initWithDelegate:(id)a0 context:(id)a1;
- (void)updateForItems:(id)a0 forced:(BOOL)a1;
- (BOOL)_hasSendingMessages;
- (void)_resetSendProgress;
- (void)_updateSendProgress;
- (void)_scheduleSendProgressTimerIfNeeded;

@end
