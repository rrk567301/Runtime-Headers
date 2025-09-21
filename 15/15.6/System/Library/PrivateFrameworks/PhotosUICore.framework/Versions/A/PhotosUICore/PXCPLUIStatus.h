@class NSString;

@interface PXCPLUIStatus : NSObject <NSCopying>

@property (copy, nonatomic) NSString *stateDescription;
@property (copy, nonatomic) NSString *startSyncDescription;
@property (copy, nonatomic) NSString *failureDescription;
@property (copy, nonatomic) NSString *internalInformationMessage;
@property (nonatomic, getter=isPaused) char paused;
@property (nonatomic) float progress;
@property (copy, nonatomic) NSString *referencedItemsDescription;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertTitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) long long serviceAction;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long activity;
@property (nonatomic) long long pauseReason;
@property (nonatomic) char inResetSync;
@property (nonatomic) char isRestoringLibrary;
@property (nonatomic) char hasCompletedInitialSync;
@property (nonatomic) char isExiting;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) char isUpgradeSuggestedToAccessAllPhotos;
@property (nonatomic) unsigned long long numberOfPhotoAssets;
@property (nonatomic) unsigned long long numberOfVideoAssets;
@property (nonatomic) unsigned long long numberOfOtherAssets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
