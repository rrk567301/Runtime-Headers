@class NSString, NSDate;

@interface BMDeviceSilentMode : BMEventBase <BMStoreData> {
    char _hasRaw_untilTime;
    double _raw_untilTime;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char starting;
@property (nonatomic) char hasStarting;
@property (readonly, nonatomic) int clientType;
@property (readonly, nonatomic) NSDate *untilTime;
@property (readonly, nonatomic) NSString *reason;
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
- (id)initWithStarting:(id)a0 clientType:(int)a1 untilTime:(id)a2 reason:(id)a3;

@end
