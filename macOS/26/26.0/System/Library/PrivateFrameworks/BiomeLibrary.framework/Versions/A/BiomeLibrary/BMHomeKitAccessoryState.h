@class NSString, NSData;

@interface BMHomeKitAccessoryState : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *mediaPropertyType;
@property (readonly, nonatomic) int valueType;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) double numValue;
@property (nonatomic) BOOL hasNumValue;
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
- (id)initWithMediaPropertyType:(id)a0 valueType:(int)a1 dataValue:(id)a2 stringValue:(id)a3 numValue:(id)a4;

@end
