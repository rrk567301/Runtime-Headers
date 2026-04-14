@class NSArray, NSMutableArray, ADVisualDepthBuffer;

@interface ADVisualDepthKeyframeInput : NSObject {
    NSMutableArray *_MutableKeyframes;
}

@property (readonly, retain, nonatomic) NSArray *meshKeyframes;
@property (retain, nonatomic) ADVisualDepthBuffer *metricDepth;

- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (void)addKeyframe:(id)a0;
- (BOOL)removeKeyframeWithUUID:(id)a0;

@end
