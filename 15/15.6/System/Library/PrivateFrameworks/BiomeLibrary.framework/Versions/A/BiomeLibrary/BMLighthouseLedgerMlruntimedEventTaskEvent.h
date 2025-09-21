@class NSString;

@interface BMLighthouseLedgerMlruntimedEventTaskEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char succeeded;
@property (nonatomic) char hasSucceeded;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
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
- (id)initWithSucceeded:(id)a0 errorDomain:(id)a1 errorCode:(id)a2;

@end
