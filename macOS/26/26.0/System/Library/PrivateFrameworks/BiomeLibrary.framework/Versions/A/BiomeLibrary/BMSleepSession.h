@class NSString, NSDate;

@interface BMSleepSession : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startTimestamp;
    double _raw_startTimestamp;
    BOOL _hasRaw_endTimestamp;
    double _raw_endTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int startReason;
@property (readonly, nonatomic) int endReason;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSDate *startTimestamp;
@property (readonly, nonatomic) NSDate *endTimestamp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStarting:(id)a0 uuid:(id)a1 startTimestamp:(id)a2 endTimestamp:(id)a3;
- (id)initWithStarting:(id)a0 uuid:(id)a1 startTimestamp:(id)a2 startReason:(int)a3 endTimestamp:(id)a4 endReason:(int)a5;

@end
