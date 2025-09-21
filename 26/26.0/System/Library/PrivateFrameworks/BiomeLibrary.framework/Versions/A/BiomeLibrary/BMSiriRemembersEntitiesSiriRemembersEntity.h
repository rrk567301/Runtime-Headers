@class NSArray, NSString;

@interface BMSiriRemembersEntitiesSiriRemembersEntity : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *entityFields;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *fields;
@property (readonly, nonatomic) NSString *fieldsTokens;
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
- (id)initWithIdentifier:(id)a0 type:(id)a1 entityFields:(id)a2;
- (id)initWithIdentifier:(id)a0 type:(id)a1 entityFields:(id)a2 fields:(id)a3 fieldsTokens:(id)a4;
- (id)initWithIdentifier:(id)a0 type:(id)a1 fields:(id)a2 fieldsTokens:(id)a3;

@end
