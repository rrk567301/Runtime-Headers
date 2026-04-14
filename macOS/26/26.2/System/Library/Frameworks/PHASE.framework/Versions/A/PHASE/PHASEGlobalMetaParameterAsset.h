@interface PHASEGlobalMetaParameterAsset : PHASEAsset {
    const void *_metaParamReference;
    struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { struct { struct MetaParameter *__ptr_; } ; } _metaParamOwnedAsset;
    struct MetaParamState { struct MetaParameter *param; struct Fader<double> { struct Envelope<double> { struct vector<Phase::Envelope<double>::SegmentInternal, std::allocator<Phase::Envelope<double>::SegmentInternal>> { struct SegmentInternal *__begin_; struct SegmentInternal *__end_; struct { struct SegmentInternal *__cap_; } ; } mSegments; } mEnvelope; double mOffset; double mDefaultValue; double mValue; } mFader; union MetaParamValue { double fltVal; unsigned long long stringVal; } currentInputValue; } _metaParamState;
}

+ (id)new;

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)sizeInBytes;
- (id)init;
- (void *)getMetaParamState;
- (const void *)getMetaParameter;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1 weakStringPoolReference:(void *)a2;
- (id)initWithUID:(id)a0 metaParameterWeakReference:(const void *)a1 assetRegistry:(id)a2 weakStringPoolReference:(void *)a3;
- (id)initWithUID:(id)a0 ownedMetaParameter:(struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { struct { struct MetaParameter *x0; } x0; })a1 assetRegistry:(id)a2 weakStringPoolReference:(void *)a3;

@end
