@class NSUUID, NSString, NSData, BMMonotonicTimestampValue;

@interface BMMonotonicTimestamp : BMEventBase <BMStoreData> {
    NSData *_raw_bootSessionUUID;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long suspendingNanosecondsSinceBoot;
@property (nonatomic) BOOL hasSuspendingNanosecondsSinceBoot;
@property (readonly, nonatomic) unsigned long long continuousNanosecondsSinceBoot;
@property (nonatomic) BOOL hasContinuousNanosecondsSinceBoot;
@property (readonly, nonatomic) NSUUID *bootSessionUUID;
@property (readonly, nonatomic) BMMonotonicTimestampValue *value;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;
+ (id)nowFromContinuousClock;
+ (id)nowFromSuspendingClock;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBootSessionUUID:(id)a0 machAbsoluteTime:(id)a1 machContinuousTime:(id)a2;
- (id)initWithBootSessionUUID:(id)a0 suspendingNanosecondsSinceBoot:(id)a1 continuousNanosecondsSinceBoot:(id)a2;
- (id)initWithBootSessionUUID:(id)a0 value:(id)a1;

@end
