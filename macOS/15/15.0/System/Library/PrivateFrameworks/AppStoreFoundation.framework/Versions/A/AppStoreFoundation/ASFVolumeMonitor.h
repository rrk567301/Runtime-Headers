@class NSArray, NSString, NSMutableArray;

@interface ASFVolumeMonitor : NSObject <SKManagerListener> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_installable;
    NSMutableArray *_available;
    BOOL _initialLoadComplete;
}

@property (readonly, copy) NSArray *installableVolumes;
@property (readonly, copy) NSArray *removableVolumes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearPreferredVolume;
+ (id)preferredVolumeInfo;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disksAppeared:(id)a0;
- (void)disksChanged:(id)a0;
- (void)disksDisappeared:(id)a0;
- (id)visibleDiskRoles;
- (id)_filterDisks:(id)a0;

@end
