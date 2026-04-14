@interface ANSTSam2MemHelper : NSObject {
    double _updateTime;
    unsigned long long _num_mask;
    unsigned long long _num_obj;
    float _maskmem_tpos_enc[448];
    float _dim_t[128];
    float _obj_ptr_tpos_proj_bias[64];
    float _obj_ptr_tpos_proj_weight[16384];
    float _obj_ptr_tpos_norm_bias[64];
    float _obj_ptr_tpos_norm_weight[64];
    float _pos_idx[4096];
    float _obj_pos[1024];
    float _obj_pos_norm[1024];
}

- (void)changeUpdateTime:(double)a0;
- (void)computeEmbeddingFromPool:(id)a0 toNetworkMemInput:(id)a1 andPosInput:(id)a2;
- (BOOL)createStaticWeightsFromBin:(id)a0 toPointer:(float *)a1 assertLen:(unsigned long long)a2;
- (void)feedFromMemPool:(id)a0 toMemInput:(id)a1 andPosInput:(id)a2;
- (void)feedFromObjPool:(id)a0 curFrameDelta:(unsigned long long)a1 toMemInput:(id)a2 andPosInput:(id)a3;
- (id)initWithEmbeddingUrl:(id)a0 NumMask:(unsigned long long)a1 NumObj:(unsigned long long)a2 updateTime:(double)a3;

@end
