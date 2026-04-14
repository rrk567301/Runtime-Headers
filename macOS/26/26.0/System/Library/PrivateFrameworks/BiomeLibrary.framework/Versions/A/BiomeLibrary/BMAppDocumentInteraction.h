@class NSString, BMAppDocumentInteractionAppIdentity, BMAppDocumentInteractionFileIdentity, BMAppDocumentInteractionRemoteUser;

@interface BMAppDocumentInteraction : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BMAppDocumentInteractionFileIdentity *fileIdentity;
@property (readonly, nonatomic) NSString *contentTypeIdentifier;
@property (readonly, nonatomic) BMAppDocumentInteractionAppIdentity *appIdentity;
@property (readonly, nonatomic) BMAppDocumentInteractionRemoteUser *remoteUser;
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
- (id)initWithType:(int)a0 fileIdentity:(id)a1 contentTypeIdentifier:(id)a2 appIdentity:(id)a3 remoteUser:(id)a4;

@end
