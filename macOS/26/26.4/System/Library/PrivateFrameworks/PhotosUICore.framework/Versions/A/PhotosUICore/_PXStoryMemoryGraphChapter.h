@class NSDictionary, NSString, NSMutableDictionary;

@interface _PXStoryMemoryGraphChapter : NSObject <PXStoryMutableChapter> {
    NSMutableDictionary *_graphChapterDictionary;
}

@property (copy, nonatomic) NSDictionary *graphChapterDictionary;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;

- (void).cxx_destruct;
- (id)init;

@end
