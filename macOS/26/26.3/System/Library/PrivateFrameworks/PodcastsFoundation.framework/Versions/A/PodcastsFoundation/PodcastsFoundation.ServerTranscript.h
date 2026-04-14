@class NSString;

@interface PodcastsFoundation.ServerTranscript : NSObject <PodcastsFoundation.MediaObject> {
    void /* function */ id;
    void /* function */ type;
    void /* unknown type, empty encoding */ attributes;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

- (id)init;
- (void).cxx_destruct;

@end
