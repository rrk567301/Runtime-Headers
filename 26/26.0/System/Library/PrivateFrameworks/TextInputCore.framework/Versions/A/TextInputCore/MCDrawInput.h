@interface MCDrawInput : MCKeyboardInput

@property (readonly, nonatomic) struct PathResampler { struct PathResamplerParams { double segment_length; int inflection_point_detection_mode; int inflection_point_type; BOOL should_downsample; double minimum_pause_length; BOOL should_flush_on_pause; } m_params; struct Path { struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> { struct PathSample *__begin_; struct PathSample *__end_; struct PathSample *__cap_; } m_samples; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } m_inflection_points; } m_resampled_path; struct Path { struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> { struct PathSample *__begin_; struct PathSample *__end_; struct PathSample *__cap_; } m_samples; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } m_inflection_points; } m_raw_path; BOOL m_is_final; unsigned int m_processed_sample_count; unsigned int m_retroactively_processed_sample_count; } resampler;
@property (nonatomic) int drawHand;
@property (readonly, nonatomic) struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *m_ptr; } keyboardLayout;
@property (readonly, nonatomic) struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *m_ptr; } rescaleKeyboardLayout;
@property (readonly, nonatomic) BOOL isCompleting;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) BOOL isDrawing;
@property (readonly, nonatomic) BOOL shouldResample;

+ (struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *x0; })copyKeyboardLayout:(const void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendWithPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 force:(double)a2 radius:(double)a3 touchStage:(int)a4;
- (BOOL)_canCompose;
- (id)_createDrawableTouchInputWithPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 force:(double)a2 radius:(double)a3 touchStage:(int)a4 previousTouchInput:(id)a5 isInflectionPoint:(BOOL)a6;
- (void)_updateSampledInputs;
- (void)_updateSampledInputsWithResampler:(const void *)a0 permanentlyFinalized:(BOOL)a1;
- (BOOL)canComposeNew:(id)a0;
- (void)composeNew:(id)a0;
- (void)composeWith:(id)a0;
- (id)initWithKeyboardLayout:(const void *)a0;
- (id)initWithKeyboardLayout:(const void *)a0 rescaleKeyboardLayout:(const void *)a1;
- (id)initWithKeyboardLayout:(const void *)a0 rescaleKeyboardLayout:(const void *)a1 shouldResample:(BOOL)a2;
- (id)shortDescriptionWithLeadingString:(id)a0;

@end
