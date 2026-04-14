@class NSString;

@interface BMDeviceTimeZone : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double secondsFromGMT;
@property (nonatomic) BOOL hasSecondsFromGMT;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (id)timeZone;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithSecondsFromGMT:(id)a0 name:(id)a1;
- (id)initWithSecondsFromGMT:(id)a0;

@end
