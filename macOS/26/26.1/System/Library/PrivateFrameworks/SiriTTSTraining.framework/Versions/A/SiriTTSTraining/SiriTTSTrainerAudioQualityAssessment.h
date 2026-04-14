@interface SiriTTSTrainerAudioQualityAssessment : NSObject {
    struct map<AudioQualityMetric, double, std::less<AudioQualityMetric>, std::allocator<std::pair<const AudioQualityMetric, double>>> { struct __tree<std::__value_type<AudioQualityMetric, double>, std::__map_value_compare<AudioQualityMetric, std::__value_type<AudioQualityMetric, double>, std::less<AudioQualityMetric>>, std::allocator<std::__value_type<AudioQualityMetric, double>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _metrics;
}

@property (readonly, nonatomic) float SPL;
@property (readonly, nonatomic) float SNR;
@property (readonly, nonatomic) float SPL_unnormalized;
@property (readonly, nonatomic) float SNR_unnormalized;
@property (readonly, nonatomic) float SPL_end;
@property (readonly, nonatomic) float SNR_end;
@property (readonly, nonatomic) float SPL_unnormalized_end;
@property (readonly, nonatomic) float SNR_unnormalized_end;
@property (readonly, nonatomic) float SPL_threshold;
@property (readonly, nonatomic) float SNR_threshold;

+ (float)DO_NOT_NORMALIZE;
+ (float)default_target_db;
+ (float)default_threshold_db;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
