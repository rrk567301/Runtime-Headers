@class NSDate;

@interface PXCMMInvitationsIsNewMonitor : NSObject {
    NSDate *_lastExitedForYouDate;
}

@property (class, readonly) PXCMMInvitationsIsNewMonitor *sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)_lastExitedDateDidChange:(id)a0;
- (void)_updateLastExitedDate;
- (char)invitationIsNew:(id)a0;

@end
