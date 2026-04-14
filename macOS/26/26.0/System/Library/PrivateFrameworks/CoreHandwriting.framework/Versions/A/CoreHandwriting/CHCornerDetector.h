@class NSMutableIndexSet, CHDrawing;

@interface CHCornerDetector : NSObject {
    BOOL _shouldUseDynamicSampling;
    double _minimumSignificantSegmentLength;
    CHDrawing *_drawing;
    CHDrawing *_resampledDrawing;
    unsigned long long _directionChangeCount;
    unsigned long long _highestDirectionChangeCount;
    unsigned long long __strawSize;
    NSMutableIndexSet *__cornerIndexSet;
    NSMutableIndexSet *__directionChangeCornerIndexes;
    struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> { void *__begin_; void *__end_; void *__cap_; } __resampledDrawingPointMap;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
