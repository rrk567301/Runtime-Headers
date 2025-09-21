@class NSString, NSArray, GEOPDScorecardLayout;

@interface GEOPlaceQuestionnaire : NSObject {
    GEOPDScorecardLayout *_scorecardLayout;
}

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) NSArray *ratingCategories;
@property (readonly, nonatomic) char alwaysPositionInitialRatingCtaTowardsTop;
@property (readonly, nonatomic) char canCollectRatings;
@property (readonly, nonatomic) char canCollectPhotos;
@property (readonly, nonatomic) char canShowCallToAction;
@property (readonly, nonatomic) unsigned long long maximumNumberOfPhotos;
@property (readonly, nonatomic) unsigned long long maxPixels;
@property (readonly, nonatomic) unsigned long long minPixels;
@property (readonly, nonatomic) float maxAspectRatio;

- (void).cxx_destruct;
- (id)initWithGEOPDPlaceQuestionnaire:(id)a0;

@end
