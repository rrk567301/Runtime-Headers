@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory;

+ (long long)participantChangeThreshold;
+ (id)loadNoticeEventHistory;
+ (long long)commentThreshold;
+ (long long)defaultThreshold;
+ (id)peristencePath;

- (long long)thresholdForNoticeType:(long long)a0;
- (BOOL)shouldSendNotice:(id)a0;
- (void)didSendNotice:(id)a0;
- (void)saveNoticeEventHistory;
- (void).cxx_destruct;
- (id)dateLastUpdatedForURL:(id)a0;
- (id)init;

@end
