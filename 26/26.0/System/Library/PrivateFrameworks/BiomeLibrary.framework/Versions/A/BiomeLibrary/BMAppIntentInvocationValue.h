@class BMAppIntentInvocationDisplayRepresentation, NSString, BMAppIntentInvocationValueType, NSData;

@interface BMAppIntentInvocationValue : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMAppIntentInvocationValueType *valueType;
@property (readonly, nonatomic) NSData *value;
@property (readonly, nonatomic) BMAppIntentInvocationDisplayRepresentation *displayRepresentation;
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
- (id)initWithValueType:(id)a0 value:(id)a1 displayRepresentation:(id)a2;

@end
