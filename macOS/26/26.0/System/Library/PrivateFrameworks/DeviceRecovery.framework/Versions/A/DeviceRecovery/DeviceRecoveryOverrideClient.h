@class NSString, NSXPCConnection, NSDictionary, NSNumber;

@interface DeviceRecoveryOverrideClient : NSObject

@property (retain) NSXPCConnection *serviceConnection;
@property (nonatomic) int brainType;
@property (retain, nonatomic) NSString *brainBundlePath;
@property (retain, nonatomic) NSNumber *freeSpaceThreshold;
@property (retain, nonatomic) NSString *userDataPath;
@property (retain, nonatomic) NSString *systemDataPath;
@property (retain, nonatomic) NSString *updateVolumePath;
@property (nonatomic) int userAuthResult;
@property (nonatomic) int networkAvailableResult;
@property (nonatomic) int brainLoadResult;
@property (nonatomic) int issuesScanResult;
@property (nonatomic) int recoveryResult;
@property (readonly, nonatomic) NSDictionary *allOverrides;

- (id)init;
- (void)setOverride:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (void)removeAllOverrides;
- (id)fetchOverride:(id)a0;

@end
