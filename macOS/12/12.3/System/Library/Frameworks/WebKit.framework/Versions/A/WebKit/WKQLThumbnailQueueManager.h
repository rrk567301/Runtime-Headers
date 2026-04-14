@class NSOperationQueue;

@interface WKQLThumbnailQueueManager : NSObject

@property (readonly, retain, nonatomic) NSOperationQueue *queue;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;

@end
