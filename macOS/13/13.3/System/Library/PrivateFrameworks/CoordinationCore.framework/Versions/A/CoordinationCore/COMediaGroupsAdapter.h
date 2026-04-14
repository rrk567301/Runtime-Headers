@class MGGroupQuery, NSArray, HMAccessory, COHomeKitAdapter;

@interface COMediaGroupsAdapter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) COHomeKitAdapter *adapter;
@property (retain, nonatomic) HMAccessory *accessory;
@property (copy, nonatomic) NSArray *groups;
@property (copy, nonatomic) NSArray *currentActivityGroups;
@property (retain, nonatomic) MGGroupQuery *activityGroupsQuery;

- (void).cxx_destruct;
- (void)_bootstrap;
- (void)_withLock:(id /* block */)a0;
- (void)_didUpdateActivityGroups:(id)a0;
- (BOOL)_prepareAccessory_unsafe;
- (void)_prepareActivityGroupsQuery_unsafe;
- (void)_prepareGroupQuery_unsafe;
- (void)_significantHomeChange:(id)a0;
- (id)initWithHomeKitAdapter:(id)a0;

@end
