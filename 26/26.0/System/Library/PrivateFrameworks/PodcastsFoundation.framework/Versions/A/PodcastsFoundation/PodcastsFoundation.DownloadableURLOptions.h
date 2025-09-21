@class NSString, NSURL;

@interface PodcastsFoundation.DownloadableURLOptions : NSObject {
    void /* function */ urlRawString;
}

@property (nonatomic, readonly) NSString *urlRawString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic) BOOL nonAppInitiated;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0 nonAppInitiated:(BOOL)a1;
- (id)initWithUrl:(id)a0 nonAppInitiated:(BOOL)a1;

@end
