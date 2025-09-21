@class NSUUID, HKWorkoutConfiguration, NSString, NSArray, HDHealthStoreClient;

@interface HDWorkoutSessionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) long long sessionType;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *clientApplicationIdentifier;
@property (readonly, nonatomic) char requiresCoreLocationAssertion;
@property (readonly, nonatomic) char supportsAppRelaunchForRecovery;
@property (readonly, nonatomic) char supports3rdPartyAOT;
@property (readonly, nonatomic) char enableWorkoutChangeDetection;
@property (retain, nonatomic) NSArray *activityConfigurations;

- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 workoutConfiguration:(id)a1 sessionType:(long long)a2 client:(id)a3 processBundleIdentifier:(id)a4 applicationIdentifier:(id)a5 requiresCoreLocationAssertion:(char)a6 supportsAppRelaunchForRecovery:(char)a7 supports3rdPartyAOT:(char)a8 enableWorkoutChangeDetection:(char)a9 activityConfigurations:(id)a10;

@end
