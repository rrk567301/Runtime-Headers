@class NSString;

@interface PodcastsFoundation.ServerPodcastStation : NSObject <PodcastsFoundation.MediaObject> {
    void /* function */ id;
    void /* function */ type;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ episodes;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;

@end
