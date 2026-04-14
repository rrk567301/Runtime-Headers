@class NSString, BMSiriEntityInfoSiriEntityHashInfo;

@interface BMSiriEntityInfo : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) BMSiriEntityInfoSiriEntityHashInfo *hashInfo;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithExternalIdentifier:(id)a0 hashInfo:(id)a1;

@end
