@class NSString;

@interface BMCustomAttributesBasicValue : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char boolValue;
@property (nonatomic) char hasBoolValue;
@property (readonly, nonatomic) long long int64Value;
@property (nonatomic) char hasInt64Value;
@property (readonly, nonatomic) double doubleValue;
@property (nonatomic) char hasDoubleValue;
@property (readonly, nonatomic) NSString *stringValue;
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
- (id)initWithBoolValue:(id)a0 int64Value:(id)a1 doubleValue:(id)a2 stringValue:(id)a3;

@end
