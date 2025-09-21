@class NSString, NSArray, GEOMapItemAttribution;

@interface _MKMapItemAttribution : NSObject {
    GEOMapItemAttribution *_geoAttribution;
}

@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSArray *attributionURLs;
@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSString *captionDisplayName;
@property (readonly, nonatomic) char requiresAttributionInCallout;
@property (readonly, nonatomic) char requiresAttributionInDeveloperPlaceCard;
@property (readonly, nonatomic) char shouldOpenInAppStore;
@property (readonly, nonatomic) NSString *appAdamID;

+ (id)attributionFromEncyclopedicInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithGEOMapItemAttribution:(id)a0;
- (id)providerLogoImage;
- (id)providerSnippetLogoImage;

@end
