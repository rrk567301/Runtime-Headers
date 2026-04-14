@class NSString, NSArray;

@interface BMMailSearchUIEventInputDetected : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSArray *token;
@property (readonly, nonatomic) BOOL isZkw;
@property (nonatomic) BOOL hasIsZkw;
@property (readonly, nonatomic) NSArray *bucketizedToken;
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
- (id)initWithIsZkw:(id)a0 bucketizedToken:(id)a1;
- (id)_bucketizedTokenJSONArray;
- (id)initWithIsZkw:(id)a0 searchQuery:(id)a1 token:(id)a2;

@end
