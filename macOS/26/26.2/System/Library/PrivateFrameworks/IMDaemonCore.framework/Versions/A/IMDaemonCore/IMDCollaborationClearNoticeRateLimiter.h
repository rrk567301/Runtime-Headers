@interface IMDCollaborationClearNoticeRateLimiter : NSObject {
    void /* unknown type, empty encoding */ rateLimiterOverride;
    void /* unknown type, empty encoding */ persistenceQueue;
    void /* unknown type, empty encoding */ noticeEventHistory;
}

- (void).cxx_destruct;
- (id)init;
- (void)didSendWithNotice:(id)a0;
- (BOOL)shouldSendWithNotice:(id)a0;

@end
