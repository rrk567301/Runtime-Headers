@class NSString;

@interface BMFeatureDouble : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL wasImputed;
@property (nonatomic) BOOL hasWasImputed;
@property (readonly, nonatomic) BOOL defaultValue;
@property (nonatomic) BOOL hasDefaultValue;
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
- (id)initWithValue:(id)a0 wasImputed:(id)a1 defaultValue:(id)a2;

@end
