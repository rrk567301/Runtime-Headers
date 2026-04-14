@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject {
    TSCHMultiDataLayerAnimationInfo *_animationInfo;
    NSMutableArray *_animations;
}

+ (id)entry;

- (void).cxx_destruct;
- (id)animation;
- (id)init;
- (void)addAnimation:(id)a0 animationInfo:(id)a1;

@end
