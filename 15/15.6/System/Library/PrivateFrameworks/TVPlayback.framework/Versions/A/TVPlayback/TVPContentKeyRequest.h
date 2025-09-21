@class NSData, NSString, NSURL, NSDate, TVPContentKeySession, NSArray, NSDictionary, NSMutableDictionary, NSError, NSNumber, AVContentKeyRequest;

@interface TVPContentKeyRequest : NSObject

@property (retain, nonatomic) NSURL *keyIdentifier;
@property (readonly, nonatomic) AVContentKeyRequest *avContentKeyRequest;
@property (weak, nonatomic) TVPContentKeySession *contentKeySession;
@property (nonatomic) char wantsOfflineKeysIfPossible;
@property (nonatomic) char isRenewal;
@property (nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, nonatomic) NSString *eventReportingID;
@property (readonly, nonatomic) char isCancelled;
@property (retain, nonatomic) NSDate *requestStartDate;
@property (retain, nonatomic) NSDate *requestEndDate;
@property (retain, nonatomic) NSData *keyRequestData;
@property (retain, nonatomic) NSDictionary *additionalRequestParams;
@property (retain, nonatomic) NSDate *serverRequestStartDate;
@property (retain, nonatomic) NSArray *keyFormatVersions;
@property (retain, nonatomic) NSString *adamID;
@property (retain, nonatomic) NSData *offlineKeyData;
@property (retain, nonatomic) NSData *secureInvalidationNonceData;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData *keyResponseData;
@property (retain, nonatomic) NSDate *renewalDate;
@property (retain, nonatomic) NSNumber *renewalInterval;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *availabilityEndDate;
@property (retain, nonatomic) NSString *contentID;
@property (nonatomic) char isLowValueKey;
@property (retain, nonatomic) NSNumber *playbackDuration;
@property (nonatomic) char allowManualRenewal;
@property (retain, nonatomic) NSDictionary *additionalRequestParamsFromResponse;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) NSError *error;

+ (void)initialize;

- (id)description;
- (void).cxx_destruct;
- (void)finish;
- (void)finishByRequestingOfflineKeysIfPossible;
- (id)initWithAVContentKeyRequest:(id)a0;
- (void)makeKeyRequestDataForCertificateData:(id)a0 assetIDData:(id)a1 completion:(id /* block */)a2;
- (void)offlineKeyDataFromServerKeyData:(id)a0 completion:(id /* block */)a1;
- (id)offlineKeyDataFromServerKeyData:(id)a0 error:(id *)a1;

@end
