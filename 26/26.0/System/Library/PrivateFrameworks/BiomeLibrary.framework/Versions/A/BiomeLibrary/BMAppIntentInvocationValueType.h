@class NSString, BMAppIntentInvocationValueTypeLinkEnumeration, BMAppIntentInvocationValueTypeArray, BMAppIntentInvocationValueTypeEntity;

@interface BMAppIntentInvocationValueType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int containerType;
@property (readonly, nonatomic) BMAppIntentInvocationValueTypeArray *array;
@property (readonly, nonatomic) BMAppIntentInvocationValueTypeEntity *entity;
@property (readonly, nonatomic) int legacyIntent;
@property (readonly, nonatomic) BMAppIntentInvocationValueTypeLinkEnumeration *linkEnumeration;
@property (readonly, nonatomic) int measurement;
@property (readonly, nonatomic) int primitive;
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
- (id)initWithContainerType:(int)a0 array:(id)a1 entity:(id)a2 legacyIntent:(int)a3 linkEnumeration:(id)a4 measurement:(int)a5 primitive:(int)a6;

@end
