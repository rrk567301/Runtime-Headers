@class NSString;

@interface BMSpotlightOperations : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) long long itemsCount;
@property (nonatomic) BOOL hasItemsCount;
@property (readonly, nonatomic) long long operation;
@property (nonatomic) BOOL hasOperation;
@property (readonly, nonatomic) long long reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (readonly, nonatomic) NSString *stringReason;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithClient:(id)a0 itemsCount:(id)a1 operation:(id)a2 reason:(id)a3 stringIdentifier:(id)a4 stringReason:(id)a5;

@end
