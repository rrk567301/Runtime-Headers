@class NSDate;

@interface PXCMMInvitationsIsNewMonitor : NSObject {
    NSDate *_lastExitedForYouDate;
}

@property (class, readonly) PXCMMInvitationsIsNewMonitor *sharedMonitor;

- (void).cxx_destruct;
- (id)init;
- (void)_lastExitedDateDidChange:(id)a0;
- (void)_updateLastExitedDate;
- (BOOL)invitationIsNew:(id)a0;

@end
