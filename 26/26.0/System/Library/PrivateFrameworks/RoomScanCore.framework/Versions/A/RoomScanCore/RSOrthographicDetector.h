@class NSArray, NSMutableArray;

@interface RSOrthographicDetector : NSObject {
    struct __CVBuffer { } *_semanticMapBuffer;
    void /* unknown type, blank encoding */ *_semanticMap;
    struct __IOSurface { } *_ioSurface;
    struct __CVBuffer *_logitsMapBuffers[6];
    struct __CVBuffer *_offsetsMapBuffers[6];
    struct __IOSurface *_logitsMapIoSurfaces[6];
    struct __IOSurface *_offsetsMapIoSurfaces[6];
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; void *__cap_; } _logitsMap;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; void *__cap_; } _offsetsMap;
    void *_ctx;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    float _scale;
    float _shift;
    float _defaultBoxSizes[6][20][2];
    struct vector<std::vector<std::vector<std::vector<std::vector<float>>>>, std::allocator<std::vector<std::vector<std::vector<std::vector<float>>>>>> { void *__begin_; void *__end_; void *__cap_; } _anchorBoxes;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _softmaxBuffer;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; int *__cap_; } _importantClasses;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _defaultBoxStrides;
    NSArray *_boxes;
    NSMutableArray *_windows;
    NSMutableArray *_doors;
    NSMutableArray *_openings;
    NSMutableArray *_opendoors;
    NSMutableArray *_curvedWindows;
    NSMutableArray *_curvedDoors;
    const float *_filterThresholds;
    BOOL _isOnline;
    BOOL normalizedOutput;
}

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
