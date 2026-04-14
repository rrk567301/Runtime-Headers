@class NSMutableArray;
@protocol DownloadAlertsManagerDataSource, DownloadAlertsManagerDelegate;

@interface DownloadAlertsManager : NSObject {
    BOOL _waitingToShowTerminationPrompt;
    NSMutableArray *_queuedAlerts;
}

@property (weak, nonatomic) id<DownloadAlertsManagerDataSource> dataSource;
@property (weak, nonatomic) id<DownloadAlertsManagerDelegate> delegate;

+ (id)stringForInsufficientDiskSpaceMessageWithFileName:(id)a0 volumeName:(id)a1;

- (void).cxx_destruct;
- (void)_showNextQueuedAlert;
- (void)_showTerminationPrompt;
- (void)alertInsufficientDiskSpaceSheetForDownloadWithFilename:(id)a0 atURL:(id)a1;
- (void)alertInvalidDownloadFileErrorAtURL:(id)a0;
- (void)alertPermissionDeniedDownloadFileErrorForURL:(id)a0;
- (BOOL)shouldShowTerminationPrompt;
- (void)showDownloadAlert:(id)a0;
- (void)showTerminationPrompt;

@end
