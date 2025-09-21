@class NSString, NSDate;

@interface BMActivitySchedulerActivityProfile : BMEventBase <BMStoreData> {
    char _hasRaw_endTime;
    double _raw_endTime;
    char _hasRaw_startTime;
    double _raw_startTime;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *activityname;
@property (readonly, nonatomic) char completed;
@property (nonatomic) char hasCompleted;
@property (readonly, nonatomic) int CPUAwakeTime;
@property (nonatomic) char hasCPUAwakeTime;
@property (readonly, nonatomic) double CPUTime;
@property (nonatomic) char hasCPUTime;
@property (readonly, nonatomic) int endBatteryTemperature;
@property (nonatomic) char hasEndBatteryTemperature;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) char endedInIdle;
@property (nonatomic) char hasEndedInIdle;
@property (readonly, nonatomic) char endedOnBattery;
@property (nonatomic) char hasEndedOnBattery;
@property (readonly, nonatomic) char networkProfSuccess;
@property (nonatomic) char hasNetworkProfSuccess;
@property (readonly, nonatomic) double qosBackground;
@property (nonatomic) char hasQosBackground;
@property (readonly, nonatomic) double qosLegacy;
@property (nonatomic) char hasQosLegacy;
@property (readonly, nonatomic) double qosUserInit;
@property (nonatomic) char hasQosUserInit;
@property (readonly, nonatomic) double runTime;
@property (nonatomic) char hasRunTime;
@property (readonly, nonatomic) char rusageProfSuccess;
@property (nonatomic) char hasRusageProfSuccess;
@property (readonly, nonatomic) int servicedEnergy;
@property (nonatomic) char hasServicedEnergy;
@property (readonly, nonatomic) char sessionProfSuccess;
@property (nonatomic) char hasSessionProfSuccess;
@property (readonly, nonatomic) int startBatteryTemperature;
@property (nonatomic) char hasStartBatteryTemperature;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) char startedInIdle;
@property (nonatomic) char hasStartedInIdle;
@property (readonly, nonatomic) char startedOnBattery;
@property (nonatomic) char hasStartedOnBattery;
@property (readonly, nonatomic) int version;
@property (nonatomic) char hasVersion;
@property (readonly, nonatomic) int wifiDown;
@property (nonatomic) char hasWifiDown;
@property (readonly, nonatomic) int wifiUp;
@property (nonatomic) char hasWifiUp;
@property (readonly, nonatomic) int dirtyMemoryDelta;
@property (nonatomic) char hasDirtyMemoryDelta;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithBundleID:(id)a0 activityname:(id)a1 completed:(id)a2 CPUAwakeTime:(id)a3 CPUTime:(id)a4 endBatteryTemperature:(id)a5 endTime:(id)a6 endedInIdle:(id)a7 endedOnBattery:(id)a8 networkProfSuccess:(id)a9 qosBackground:(id)a10 qosLegacy:(id)a11 qosUserInit:(id)a12 runTime:(id)a13 rusageProfSuccess:(id)a14 servicedEnergy:(id)a15 sessionProfSuccess:(id)a16 startBatteryTemperature:(id)a17 startTime:(id)a18 startedInIdle:(id)a19 startedOnBattery:(id)a20 version:(id)a21 wifiDown:(id)a22 wifiUp:(id)a23 dirtyMemoryDelta:(id)a24;

@end
