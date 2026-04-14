@class NSArray;
@protocol PXStoryChapterCollection;

@interface PXStoryConcreteChapterCollectionEditTransaction : NSObject <PXStoryChapterCollectionEditTransaction>

@property (readonly, nonatomic) id<PXStoryChapterCollection> originalChapterCollection;
@property (readonly, nonatomic) NSArray *edits;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginalChapterCollection:(id)a0 edits:(id)a1;

@end
