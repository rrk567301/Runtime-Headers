@class NSString;

@interface BMWalletTransaction : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *passUniqueID;
@property (readonly, nonatomic) NSString *passLocalizedDescription;
@property (readonly, nonatomic) int transactionType;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) int merchantType;
@property (readonly, nonatomic) NSString *poiCategory;
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
- (id)initWithPassUniqueID:(id)a0 passLocalizedDescription:(id)a1 transactionType:(int)a2 transactionID:(id)a3 merchantType:(int)a4 poiCategory:(id)a5;
- (id)initWithPassUniqueID:(id)a0 passLocalizedDescription:(id)a1 transactionType:(int)a2 transactionID:(id)a3;

@end
