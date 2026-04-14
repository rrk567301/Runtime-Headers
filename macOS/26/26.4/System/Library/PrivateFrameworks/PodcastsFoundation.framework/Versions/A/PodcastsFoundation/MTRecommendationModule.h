@class NSString, MTRecommendationModuleAttributes;

@interface MTRecommendationModule : NSObject <PodcastsFoundation.MediaObject> {
    void /* function */ id;
    void /* function */ type;
    void /* unknown type, empty encoding */ categories;
    void /* unknown type, empty encoding */ shows;
    void /* unknown type, empty encoding */ episodes;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, readonly) MTRecommendationModuleAttributes *attributes;

- (void).cxx_destruct;

@end
