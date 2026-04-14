@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory;

+ (id)loadNoticeEventHistory;
+ (long long)participantChangeThreshold;
+ (id)peristencePath;
+ (long long)defaultThreshold;
+ (long long)commentThreshold;

- (void)saveNoticeEventHistory;
- (void).cxx_destruct;
- (void)didSendNotice:(id)a0;
- (id)dateLastUpdatedForURL:(id)a0;
- (long long)thresholdForNoticeType:(long long)a0;
- (id)init;
- (BOOL)shouldSendNotice:(id)a0;

@end
