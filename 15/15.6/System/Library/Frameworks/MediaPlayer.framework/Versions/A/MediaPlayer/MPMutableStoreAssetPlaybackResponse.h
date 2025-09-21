@class NSArray, NSDictionary, MPStoreHLSAssetInfo, NSDate;

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (copy, nonatomic) NSDictionary *dialogDictionary;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *fileAssetInfoList;
@property (retain, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (nonatomic, getter=isLiveRadioStream) char liveRadioStream;
@property (copy, nonatomic) NSArray *radioStreamAssetInfoList;
@property (retain, nonatomic) id suzeLeaseID;
@property (nonatomic, getter=isSubscriptionRequired) char subscriptionRequired;
@property (nonatomic) char onlineSubscriptionKeysRequired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExpirationDate:(id)a0;
- (void)setDialogDictionary:(id)a0;
- (void)setSuzeLeaseID:(id)a0;
- (void)setFileAssetInfoList:(id)a0;
- (void)setHlsAssetInfo:(id)a0;
- (void)setLiveRadioStream:(char)a0;
- (void)setOnlineSubscriptionKeysRequired:(char)a0;
- (void)setRadioStreamAssetInfoList:(id)a0;
- (void)setSubscriptionRequired:(char)a0;

@end
