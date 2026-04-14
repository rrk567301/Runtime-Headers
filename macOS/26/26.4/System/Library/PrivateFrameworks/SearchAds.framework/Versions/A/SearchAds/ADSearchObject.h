@class NSArray, APSearchAdFilter, NSString, NSError, ADDESRecordsManager;

@interface ADSearchObject : NSObject

@property (retain, nonatomic) ADDESRecordsManager *desRecordManager;
@property (retain, nonatomic) NSArray *advertisements;
@property (retain, nonatomic) NSArray *organics;
@property (retain, nonatomic) APSearchAdFilter *searchAdFilter;
@property (retain, nonatomic) NSString *sponsoredSearchRequestData;
@property (retain, nonatomic) NSString *routingInfoData;
@property (retain, nonatomic) NSString *deviceRequestID;
@property (retain, nonatomic) NSString *userTargetingID;
@property (retain, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSError *error;

- (id)filterAdsForNonWK:(id)a0;
- (BOOL)checkForNonWKDiscardOverrides:(BOOL)a0 forAdamID:(id)a1;
- (void)orderedAds:(id /* block */)a0;
- (void).cxx_destruct;
- (id)updatedWithTransparencyRenderingData:(id)a0;
- (id)init;
- (void)orderedAdsWithODMLSuccess:(id /* block */)a0;
- (long long)setAdvertisementsWithPolicy:(id)a0;

@end
