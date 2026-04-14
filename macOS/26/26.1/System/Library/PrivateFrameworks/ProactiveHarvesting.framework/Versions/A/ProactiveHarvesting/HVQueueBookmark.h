@class NSNumber;
@protocol BMBookmark;

@interface HVQueueBookmark : NSObject

@property (nonatomic) unsigned char los;
@property (retain, nonatomic) id<BMBookmark> pastBookmark;
@property (copy, nonatomic) NSNumber *futureCutoff;
@property (retain, nonatomic) id<BMBookmark> futureBookmark;

- (id)jsonDict;
- (void)reset;
- (void).cxx_destruct;

@end
