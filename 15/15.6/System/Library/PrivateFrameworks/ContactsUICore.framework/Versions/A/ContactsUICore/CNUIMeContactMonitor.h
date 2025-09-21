@class CNContactStore, NSArray, NSConditionLock, NSNotificationCenter;
@protocol CNMeContactComparisonStrategy, CNCancelable;

@interface CNUIMeContactMonitor : NSObject

@property (retain, nonatomic) id<CNMeContactComparisonStrategy> strategy;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSConditionLock *lock;
@property (retain, nonatomic) id<CNCancelable> meNotificationToken;
@property (readonly, nonatomic) NSArray *meContactIdentifiers;

+ (id)log;
+ (id)makeMeContactMonitor;
+ (id)makeUnifiedMeContactMonitor;
+ (id)meContactMonitor;
+ (id)unifiedMeContactMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring;
- (id)initWithContactStore:(id)a0;
- (id)initWithComparisonStrategy:(id)a0;
- (id)initWithComparisonStrategy:(id)a0 contactStore:(id)a1;
- (id)initWithComparisonStrategy:(id)a0 contactStore:(id)a1 notificationCenter:(id)a2 schedulerProvider:(id)a3;
- (char)isMeContact:(id)a0;
- (void)meChanged:(id)a0;

@end
