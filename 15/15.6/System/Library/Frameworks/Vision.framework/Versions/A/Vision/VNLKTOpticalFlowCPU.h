@interface VNLKTOpticalFlowCPU : VNLKTOpticalFlow {
    struct unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> { struct __compressed_pair<apple::vision::OpticalFlow::LKTCPU *, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> { struct LKTCPU *__value_; } __ptr_; } _opticalFlow;
    struct __CVBuffer { } *_uv_user_ref;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWidth:(int)a0 height:(int)a1 numScales:(int)a2;
- (char)estimateFlowFromReference:(struct __CVBuffer { } *)a0 target:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (char)estimateFlowStream:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (char)setOutputUV:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
