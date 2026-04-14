@class NSMutableDictionary;

@interface FMAlertManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeAlerts;
@property (retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initSingleton;
- (void)activateAlert:(id)a0;
- (id)_xpcTransactionNameFor:(id)a0;

@end
