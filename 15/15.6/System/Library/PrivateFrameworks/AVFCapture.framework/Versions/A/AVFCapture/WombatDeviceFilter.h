@class NSMutableSet;

@interface WombatDeviceFilter : NSObject {
    NSMutableSet *_tracking;
    NSMutableSet *_published;
}

+ (id)singleton;
+ (char)_isFilteringWombatDevices;
+ (char)_isShowingWombatDevices;

- (void)refreshConnectedDevices:(unsigned int *)a0 numberOfDevices:(unsigned int)a1;
- (char)shouldShowDevice:(unsigned int)a0;

@end
