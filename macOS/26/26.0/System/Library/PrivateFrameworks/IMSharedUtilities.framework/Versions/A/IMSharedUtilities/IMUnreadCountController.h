@class IMUnreadCountReportDelta, NSArray;

@interface IMUnreadCountController : NSObject {
    void /* unknown type, empty encoding */ filteringControllerLock;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) long long cachedUnreadReportsCount;
@property (nonatomic, readonly) IMUnreadCountReportDelta *fullReplacementDelta;
@property (nonatomic, readonly) NSArray *cachedUnreadReports;
@property (nonatomic, readonly) long long pendingReviewCount;
@property (nonatomic, readonly) long long unreadCount;

- (void)setIsDaemon:(BOOL)a0;
- (void)updatePendingReviewForChatsWithGUIDs:(id)a0 pendingReview:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)chat:(id)a0 lastAddressedSIMIDUpdated:(id)a1;
- (void)replaceReports:(id)a0;
- (void)chat:(id)a0 groupIDUpdated:(id)a1;
- (void)chat:(id)a0 isBlackholedUpdated:(BOOL)a1;
- (void)chat:(id)a0 isFilteredUpdated:(long long)a1;
- (void)chat:(id)a0 lastAddressedHandleIDUpdated:(id)a1;
- (void)chat:(id)a0 lastAddressedHandleIDUpdated:(id)a1 lastAddressedSIMIDUpdated:(id)a2;
- (void)chat:(id)a0 originalGroupIDUpdated:(id)a1;
- (void)chat:(id)a0 participantsUpdated:(id)a1;
- (BOOL)chatsDeletedWithGUIDs:(id)a0;
- (BOOL)clearUnreadCountForChatsWithGUIDs:(id)a0;
- (id)initWithFilteringController:(id)a0;
- (long long)pendingReviewCountForChatsWithFilterMode:(unsigned long long)a0;
- (long long)pendingReviewCountForChatsWithFilterModes:(id)a0;
- (long long)pendingReviewCountForChatsWithGUIDs:(id)a0;
- (BOOL)processDelta:(id)a0;
- (void)recalculate;
- (void)replaceDataExpirationHandler:(id /* block */)a0;
- (void)replaceFilteringController:(id)a0;
- (long long)unreadCountForChatsWithFilterMode:(unsigned long long)a0;
- (long long)unreadCountForChatsWithFilterModes:(id)a0;
- (long long)unreadCountForChatsWithGUIDs:(id)a0;
- (BOOL)updateReports:(id)a0;

@end
