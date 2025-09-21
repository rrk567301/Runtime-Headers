@class PXStoryConfiguration;

@interface _PXStoryDefaultStyleProducer : NSObject <PXStoryStyleProducer> {
    char _thumbnailOnly;
}

@property (readonly, nonatomic) PXStoryConfiguration *storyConfiguration;

- (void).cxx_destruct;
- (id)styleWithCustomColorGradeKind:(long long)a0 originalColorGradeCategory:(id)a1 songResource:(id)a2 cueSource:(id)a3 autoEditDecisionList:(id)a4 styleOptions:(struct { unsigned long long x0; char x1; })a5 isCustomized:(char)a6;
- (id)initWithStoryConfiguration:(id)a0;

@end
