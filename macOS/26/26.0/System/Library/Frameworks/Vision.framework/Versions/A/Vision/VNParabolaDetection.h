@interface VNParabolaDetection : NSObject {
    int UID_counter;
    struct map<int, InternalObservedParabola, std::less<int>, std::allocator<std::pair<const int, InternalObservedParabola>>> { struct __tree<std::__value_type<int, InternalObservedParabola>, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>>, std::allocator<std::__value_type<int, InternalObservedParabola>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } internalParabolas;
    struct ParabolaSearchBuffer { int maxFramesSkippedForDetection; int minRegionSizeX; int minRegionSizeY; struct deque<std::vector<CGPointWithPts>, std::allocator<std::vector<CGPointWithPts>>> { struct __split_buffer<std::vector<CGPointWithPts> *, std::allocator<std::vector<CGPointWithPts> *>> { void **__first_; void **__begin_; void **__end_; void **__cap_; } __map_; unsigned long long __start_; unsigned long long __size_; } contourPointsQ; } parabolaSearchBuffer;
    struct InternalParameters { int minRegionSizeX; int minRegionSizeY; float initialYDiffLimit; float startingMinDiffDeviation; float maxDistanceForSolution; int frameWidth; int frameHeight; float xScaleFactor; float yScaleFactor; int runningMinDiffDeviation; float maxFrameSkipScaleFactor; float majorAxisScaler; float minorAxisScalar; float contourSizeUpperBound; float contourSizeLowerBound; float maxRadiusToCompensate; float maxRadiusBasedDeviation; float xConsistencyDeviation; float rejectionScaler; } internalParams;
    struct map<int, ObservedParabola, std::less<int>, std::allocator<std::pair<const int, ObservedParabola>>> { struct __tree<std::__value_type<int, ObservedParabola>, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>>, std::allocator<std::__value_type<int, ObservedParabola>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _observedParabolas;
    struct ForestAlgoParams { float FAFrameRate; int parabolaLength; int minXDistanceFromLastPointOnParabola; int maxXDistanceFromLastPointOnParabola; int minYDistanceFromLastPointOnParabola; int maxYDistanceFromLastPointOnParabola; int maxFramesSkippedToContinueParabolaDetection; int minObjectSize; } _forestAlgoParams;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
