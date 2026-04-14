@class TMSession, NSString, NSMutableSet, NSObject, TMVFSEventObserver;
@protocol OS_dispatch_queue;

@interface TMBackupDataSource : NSObject

@property (readonly, copy) id /* block */ stateChangeBlock;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) TMVFSEventObserver *observer;
@property (readonly) TMSession *session;
@property (readonly, copy) NSString *liveVolumeUUID;
@property (readonly) NSMutableSet *foundDates;
@property (readonly) NSMutableSet *deletedDates;

+ (id)_extractDateFromBackupMountPoint:(id)a0;
+ (id)_extractLiveVolumeUUIDFromBackupMountPoint:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (BOOL)isObserving;
- (void)_populateInitialStateOnQueue:(id)a0;
- (void)_handleMountNotificationWithDisk:(id)a0;
- (BOOL)_shouldNotifyDelegateOfStateChange:(unsigned long long)a0 forDate:(id)a1;
- (void)_backup:(id)a0 changedState:(unsigned long long)a1;
- (void)_handleBackupDeletionNotification:(id)a0;
- (void)_handleBackupAdditionNotification:(id)a0;
- (id)initWithBackupVolumeMountPoint:(id)a0 error:(id *)a1 stateChangeBlock:(id /* block */)a2;

@end
