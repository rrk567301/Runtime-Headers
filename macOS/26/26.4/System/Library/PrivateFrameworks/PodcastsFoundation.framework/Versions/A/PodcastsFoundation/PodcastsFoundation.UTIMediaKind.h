@class NSString, NSArray;

@interface PodcastsFoundation.UTIMediaKind : NSObject

@property (class, nonatomic, readonly) NSString *audio;
@property (class, nonatomic, readonly) NSString *video;
@property (class, nonatomic, readonly) NSString *image;
@property (class, nonatomic, readonly) NSString *document;
@property (class, nonatomic, readonly) NSString *external;
@property (class, nonatomic, readonly) NSArray *audioUTITypes;
@property (class, nonatomic, readonly) NSArray *videoUTITypes;
@property (class, nonatomic, readonly) NSArray *imageUTITypes;
@property (class, nonatomic, readonly) NSArray *documentUTITypes;

- (void).cxx_destruct;
- (id)init;

@end
