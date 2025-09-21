@class NSError, NSString, NSDictionary;

@interface SFRepairResultMetrics : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) char isPreflightError;
@property (nonatomic) unsigned long long problemFlags;
@property (nonatomic) unsigned long long peerProblemFlags;
@property (retain, nonatomic) NSString *peerModel;
@property (retain, nonatomic) NSString *peerBuild;
@property (nonatomic) char forceWiFi;
@property (nonatomic) char hasView;
@property (nonatomic) double totalMs;
@property (nonatomic) double triggerMs;
@property (readonly, nonatomic) NSDictionary *dict;

- (void).cxx_destruct;
- (long long)resultType;

@end
