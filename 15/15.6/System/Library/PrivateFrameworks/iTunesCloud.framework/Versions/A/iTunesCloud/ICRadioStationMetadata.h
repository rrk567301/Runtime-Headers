@class NSString, NSDictionary, ICRadioStationProviderResource, ICStoreArtworkInfo;

@interface ICRadioStationMetadata : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (readonly, copy, nonatomic) NSString *coreSeedName;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *stationHash;
@property (readonly, nonatomic) long long stationID;
@property (readonly, copy, nonatomic) NSString *stationStringID;
@property (readonly, copy, nonatomic) NSString *attributionLabel;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic) char allowsItemLiking;
@property (readonly, nonatomic) char allowsSharing;
@property (readonly, nonatomic, getter=isSubscriptionRequired) char subscriptionRequired;
@property (readonly, copy, nonatomic) ICRadioStationProviderResource *providerResource;
@property (readonly, nonatomic, getter=containsVideo) char containsVideo;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end
