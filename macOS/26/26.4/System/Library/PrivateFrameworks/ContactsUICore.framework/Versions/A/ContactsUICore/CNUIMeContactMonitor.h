@class CNContactStore, NSArray, NSNotificationCenter, NSObject, CNCache;
@protocol CNMeContactComparisonStrategy, OS_dispatch_queue, CNCancelable;

@interface CNUIMeContactMonitor : NSObject

@property (retain, nonatomic) id<CNMeContactComparisonStrategy> strategy;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<CNCancelable> meNotificationToken;
@property (retain, nonatomic) CNCache *isMeContactCache;
@property (readonly, nonatomic) NSArray *meContactIdentifiers;

+ (id)log;
+ (id)makeMeContactMonitor;
+ (id)makeQueue;
+ (id)makeUnifiedMeContactMonitor;
+ (id)meContactMonitor;
+ (id)unifiedMeContactMonitor;

- (void)startMonitoring;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithComparisonStrategy:(id)a0;
- (id)initWithComparisonStrategy:(id)a0 contactStore:(id)a1;
- (id)initWithComparisonStrategy:(id)a0 contactStore:(id)a1 notificationCenter:(id)a2 schedulerProvider:(id)a3;
- (BOOL)isMeContact:(id)a0;
- (void)meChanged:(id)a0;

@end
