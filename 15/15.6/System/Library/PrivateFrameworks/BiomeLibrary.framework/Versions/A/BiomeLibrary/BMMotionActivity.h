@class NSString, NSDate;

@interface BMMotionActivity : BMEventBase <BMStoreData> {
    char _hasRaw_startDate;
    double _raw_startDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char stationary;
@property (nonatomic) char hasStationary;
@property (readonly, nonatomic) char walking;
@property (nonatomic) char hasWalking;
@property (readonly, nonatomic) char running;
@property (nonatomic) char hasRunning;
@property (readonly, nonatomic) char automotive;
@property (nonatomic) char hasAutomotive;
@property (readonly, nonatomic) char cycling;
@property (nonatomic) char hasCycling;
@property (readonly, nonatomic) char unknown;
@property (nonatomic) char hasUnknown;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) int confidence;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithStationary:(id)a0 walking:(id)a1 running:(id)a2 automotive:(id)a3 cycling:(id)a4 unknown:(id)a5 startDate:(id)a6 confidence:(int)a7;

@end
