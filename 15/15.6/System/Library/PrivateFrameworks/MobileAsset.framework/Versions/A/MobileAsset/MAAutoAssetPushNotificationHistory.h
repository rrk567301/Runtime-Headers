@class NSArray;

@interface MAAutoAssetPushNotificationHistory : NSObject

@property (retain, nonatomic) NSArray *notificationHistory;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_historyURL;
- (char)_loadHistoryWithError:(id *)a0;
- (char)addNotificationsToHistory:(id)a0 withError:(id *)a1;
- (char)clearHistoryWithError:(id *)a0;

@end
