@class NSString, NSNumber;

@interface CHIPApplicationLauncherClusterLaunchAppParams : NSObject

@property (retain, nonatomic) NSString *data;
@property (retain, nonatomic) NSNumber *catalogVendorId;
@property (retain, nonatomic) NSString *applicationId;

- (id)init;
- (void).cxx_destruct;

@end
