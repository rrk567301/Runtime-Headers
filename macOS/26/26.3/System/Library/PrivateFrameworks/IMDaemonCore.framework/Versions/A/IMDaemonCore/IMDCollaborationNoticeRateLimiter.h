@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory;

+ (id)peristencePath;
+ (long long)participantChangeThreshold;
+ (long long)commentThreshold;
+ (long long)defaultThreshold;
+ (id)loadNoticeEventHistory;

- (long long)thresholdForNoticeType:(long long)a0;
- (BOOL)shouldSendNotice:(id)a0;
- (id)dateLastUpdatedForURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didSendNotice:(id)a0;
- (void)saveNoticeEventHistory;

@end
