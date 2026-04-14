@class PSYSyncCoordinator;

@interface HDPairedSyncManager : NSObject

@property (readonly) PSYSyncCoordinator *syncCoordinator;

+ (id)syncCoordinatorWithServiceName:(id)a0;

- (id)initWithProfile:(id)a0 queue:(id)a1;
- (BOOL)permitSynchronization;
- (void).cxx_destruct;

@end
