@class NSString;

@interface BMAppDocumentInteractionRemoteUserNameComponents : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname;
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
- (id)initWithNamePrefix:(id)a0 givenName:(id)a1 middleName:(id)a2 familyName:(id)a3 nameSuffix:(id)a4 nickname:(id)a5;

@end
