@class NSArray;

@interface PMDeviceSharingAvailability : NSObject {
    void /* function */ devicesWithSharingAvailable;
    void /* function */ devicesWithSharingUnavailable;
}

@property (nonatomic, readonly) NSArray *devicesWithSharingAvailable;
@property (nonatomic, readonly) NSArray *devicesWithSharingUnavailable;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDevicesWithSharingAvailable:(id)a0 devicesWithSharingUnavailable:(id)a1;

@end
