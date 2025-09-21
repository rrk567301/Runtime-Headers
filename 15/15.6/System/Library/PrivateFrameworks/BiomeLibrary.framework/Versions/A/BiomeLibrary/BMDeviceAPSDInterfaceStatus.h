@class NSString;

@interface BMDeviceAPSDInterfaceStatus : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char starting;
@property (nonatomic) char hasStarting;
@property (readonly, nonatomic) char isAPSDOverWiFi;
@property (nonatomic) char hasIsAPSDOverWiFi;
@property (readonly, nonatomic) char isAPSDOverCell;
@property (nonatomic) char hasIsAPSDOverCell;
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
- (id)initWithStarting:(id)a0 isAPSDOverWiFi:(id)a1 isAPSDOverCell:(id)a2;

@end
