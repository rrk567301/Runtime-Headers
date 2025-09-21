@class NSString;

@interface BMFamilyAskToBuy : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) double eventTime;
@property (nonatomic) char hasEventTime;
@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSString *actionUserID;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSString *itemTitle;
@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) NSString *itemLocalizedPrice;
@property (readonly, nonatomic) NSString *thumbnailPath;
@property (readonly, nonatomic) NSString *ageRating;
@property (readonly, nonatomic) double starRating;
@property (nonatomic) char hasStarRating;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) char isActionUserDevice;
@property (nonatomic) char hasIsActionUserDevice;
@property (readonly, nonatomic) NSString *storeLink;
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
- (id)initWithRequestID:(id)a0 eventTime:(id)a1 userID:(id)a2 actionUserID:(id)a3 status:(int)a4 itemTitle:(id)a5 itemDescription:(id)a6 itemLocalizedPrice:(id)a7 thumbnailPath:(id)a8 ageRating:(id)a9 starRating:(id)a10 productType:(id)a11 isActionUserDevice:(id)a12 storeLink:(id)a13;

@end
