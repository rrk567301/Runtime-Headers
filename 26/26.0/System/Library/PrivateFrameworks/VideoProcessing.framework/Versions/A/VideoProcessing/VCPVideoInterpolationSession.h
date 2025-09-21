@class VCPVideoInterpolationConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface VCPVideoInterpolationSession : NSObject {
    struct VCPCNNVideoEnhancer { struct EMAMeter { float alpha_; float last_; float value_; float max_; float min_; unsigned long long calls_; } interpolation_time_ms_meter_; struct VideoEnhancerModel { int index_; int scale_factor_; int input_width_; int input_height_; int model_input_width_; int model_input_height_; int output_width_; int output_height_; int model_output_width_; int model_output_height_; BOOL reshape_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } path_; struct __CFDictionary *input_buffer_attributes_; struct __CFDictionary *output_buffer_attributes_; } model_; struct unique_ptr<EspressoModel, std::default_delete<EspressoModel>> { struct EspressoModel *__ptr_; } espresso_model_; struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } input_buffer_pool_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; struct __CVBuffer *prev_frame_; BOOL is_initialized_; BOOL scaling_; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_; } _enhancer;
    VCPVideoInterpolationConfiguration *_config;
    BOOL _scaling;
    NSObject<OS_dispatch_queue> *_queue;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } buf_pool_;
    BOOL _initialized;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transferSession_;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)processWithPreviousFrame:(struct __CVBuffer { } *)a0 currentFrame:(struct __CVBuffer { } *)a1 interpolationPhases:(id)a2 outputBuffers:(id)a3 error:(id *)a4 frameCompletionHandler:(id /* block */)a5;
- (BOOL)checkModelConfiguration:(const void *)a0 error:(id *)a1;
- (BOOL)checkOutputBuffers:(id)a0 andPhases:(id)a1 error:(id *)a2;
- (id)makePlanFor:(int)a0 withAvailable:(id)a1;
- (id)makePlanForPhases:(id)a0 asIndices:(id *)a1;
- (BOOL)mark:(id)a0 code:(int)a1 err:(id *)a2;
- (void)processWithPreviousFrame:(struct __CVBuffer { } *)a0 currentFrame:(struct __CVBuffer { } *)a1 interpolationPhase:(id)a2 outputBuffers:(id)a3 completionHandler:(id /* block */)a4 error:(id *)a5;
- (int)runInterpolationForTargets:(id)a0 withPreviousFrame:(struct __CVBuffer { } *)a1 currentFrame:(struct __CVBuffer { } *)a2 outputBuffers:(id)a3 withPlan:(id)a4 completionHandler:(id /* block */)a5;
- (void)spatialTemporalScaleWithPreviousFrame:(struct __CVBuffer { } *)a0 currentFrame:(struct __CVBuffer { } *)a1 outputBuffers:(id)a2 frameCompletionHandler:(id /* block */)a3;

@end
