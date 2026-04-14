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
- (void)showDownloadAlert:(id)a0;
- (void)alertInvalidDownloadFileErrorForPath:(id)a0;
- (void)alertInsufficientDiskSpaceSheetForDownloadWithFilename:(id)a0 atPath:(id)a1;
- (BOOL)shouldShowTerminationPrompt;
- (void)showTerminationPrompt;
- (void)_showNextQueuedAlert;
- (void)_showTerminationPrompt;

@end
