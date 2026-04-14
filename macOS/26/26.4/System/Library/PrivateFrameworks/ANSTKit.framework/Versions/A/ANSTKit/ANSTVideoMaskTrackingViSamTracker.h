@class ANSTVideoMaskTrackingViSamTrackerConfiguration, NSMutableDictionary, ANSTSam2MemHelper, ANSTVideoMaskTrackingViSamRegularModelInferOnly, ANSTVideoMaskTrackingViSamInitModelInferOnly;

@interface ANSTVideoMaskTrackingViSamTracker : ANSTVideoMaskTracking {
    ANSTVideoMaskTrackingViSamTrackerConfiguration *_configuration;
    ANSTVideoMaskTrackingViSamInitModelInferOnly *_init_net;
    ANSTVideoMaskTrackingViSamRegularModelInferOnly *_reg_net;
    ANSTVideoMaskTrackingViSamRegularModelInferOnly *_reg_net_wo;
    NSMutableDictionary *_obj_mem_pools;
    ANSTSam2MemHelper *_memHelperFunc;
    double _updateTimeTime;
    long long _fps;
    unsigned long long _image_fix_width;
    unsigned long long _image_fix_height;
    unsigned long long _low_res_fix_width;
    unsigned long long _low_res_fix_height;
    float _mask_to_box_th;
    BOOL _hasPrepared;
}

+ (id)new;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)resetWithError:(id *)a0;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)fitting_box_from_low_mask:(id)a0 withTh:(float)a1 toBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (long long)newObj:(long long)a0 trackingWithImage:(struct __CVBuffer { } *)a1 maskToTrack:(struct __CVBuffer { } *)a2 outputMaskBuffer:(struct __CVBuffer { } *)a3 outputBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 andTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;
- (long long)removeObj:(long long)a0;
- (long long)trackObject:(long long)a0 withImage:(struct __CVBuffer { } *)a1 outputMaskBuffer:(struct __CVBuffer { } *)a2 outputBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 updateStrategy:(long long)a4 andTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;

@end
