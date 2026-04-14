@class NSString, CLLocation;

@interface CLMicroLocationGeofence : NSObject

@property (retain, nonatomic) NSString *regionId;
@property (retain, nonatomic) CLLocation *regionCenterLocation;

- (void).cxx_destruct;
- (id)init;

@end
