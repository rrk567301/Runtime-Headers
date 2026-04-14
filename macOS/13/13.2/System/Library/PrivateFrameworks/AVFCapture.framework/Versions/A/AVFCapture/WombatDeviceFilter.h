@class NSMutableSet;

@interface WombatDeviceFilter : NSObject {
    NSMutableSet *_tracking;
    NSMutableSet *_published;
}

+ (id)singleton;
+ (BOOL)_isShowingWombatDevices;
+ (BOOL)_isFilteringWombatDevices;

- (BOOL)shouldShowDevice:(unsigned int)a0;
- (void)refreshConnectedDevices:(unsigned int *)a0 numberOfDevices:(unsigned int)a1;

@end
