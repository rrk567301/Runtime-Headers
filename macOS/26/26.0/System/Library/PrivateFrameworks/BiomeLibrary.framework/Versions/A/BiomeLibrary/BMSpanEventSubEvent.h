@class NSString, NSArray;

@interface BMSpanEventSubEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int privatizedTimeStamp;
@property (nonatomic) BOOL hasPrivatizedTimeStamp;
@property (readonly, nonatomic) NSString *details;
@property (readonly, nonatomic) NSArray *attributes;
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
- (id)_attributesJSONArray;
- (id)initWithName:(id)a0 privatizedTimeStamp:(id)a1 details:(id)a2 attributes:(id)a3;

@end
