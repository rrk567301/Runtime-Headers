@class NSString, NSDictionary, MTRDevice, NSUUID;

@interface MTRPluginMetric : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (retain) NSString *name;
@property (retain) MTRDevice *device;
@property (getter=isRemoteMode) BOOL remoteMode;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;
- (id)initMetricWithName:(id)a0 device:(id)a1 homeID:(id)a2 remoteMode:(BOOL)a3;

@end
