@class NSString, NSError;

@interface PodcastsFoundation.PodcastFeedDownloaderResponse : NSObject {
    void /* unknown type, empty encoding */ etag;
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ statusCode;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) NSError *error;

- (id)init;
- (void).cxx_destruct;

@end
