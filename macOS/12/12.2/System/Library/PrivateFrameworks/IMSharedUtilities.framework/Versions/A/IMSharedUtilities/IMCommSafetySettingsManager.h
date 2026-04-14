@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IMCommSafetySettingsManager : NSObject {
    int _notificationToken;
}

@property (nonatomic) BOOL checkSensitivePhotos;
@property (nonatomic) BOOL shouldNotifyParentAboutSensitivePhotos;
@property (nonatomic) BOOL childIsYoungAgeGroup;
@property (nonatomic) long long protectedChildAge;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateInProgress;
@property (retain, nonatomic) NSMutableArray *parents;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSettings;
- (BOOL)__im_ff_commSafetyInternalEnabled;
- (void)_connectToFamilyCircle:(id /* block */)a0;

@end
