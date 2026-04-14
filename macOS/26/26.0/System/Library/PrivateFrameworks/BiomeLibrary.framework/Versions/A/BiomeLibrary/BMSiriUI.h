@class NSString, NSDate;

@interface BMSiriUI : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *viewMode;
@property (readonly, nonatomic) NSString *dismissalReason;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *turnID;
@property (readonly, nonatomic) NSString *carplayPPID;
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
- (id)initWithSessionID:(id)a0 uuid:(id)a1 viewMode:(id)a2 dismissalReason:(id)a3 starting:(id)a4 absoluteTimestamp:(id)a5;
- (id)initWithSessionID:(id)a0 uuid:(id)a1 viewMode:(id)a2 dismissalReason:(id)a3 starting:(id)a4 absoluteTimestamp:(id)a5 turnID:(id)a6 carplayPPID:(id)a7;

@end
