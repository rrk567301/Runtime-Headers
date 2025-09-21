@class NSMutableSet;

@interface WebBookmarkCollectionSyncFlags : NSObject

@property (readonly, nonatomic) char syncAllowed;
@property (nonatomic) int syncLockFileDescriptor;
@property (nonatomic) long long syncNotificationType;
@property (nonatomic) char postSyncNotificationWhenUnlocking;
@property (readonly, nonatomic) NSMutableSet *lockSyncHoldRequestorPointers;
@property (nonatomic) char unlockSyncRequested;

- (void).cxx_destruct;
- (id)initWithSyncAllowed:(char)a0;

@end
