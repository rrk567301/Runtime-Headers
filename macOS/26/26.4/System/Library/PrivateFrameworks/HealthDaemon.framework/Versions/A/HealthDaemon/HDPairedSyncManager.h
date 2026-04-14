@class PSYSyncCoordinator;

@interface HDPairedSyncManager : NSObject

@property (readonly) PSYSyncCoordinator *syncCoordinator;

+ (id)syncCoordinatorWithServiceName:(id)a0;

- (BOOL)permitSynchronization;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
