@class NSMutableDictionary;

@interface FMAlertManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeAlerts;
@property (retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory;

+ (id)sharedInstance;

- (id)initSingleton;
- (void).cxx_destruct;
- (id)init;
- (id)_xpcTransactionNameFor:(id)a0;
- (void)activateAlert:(id)a0;

@end
