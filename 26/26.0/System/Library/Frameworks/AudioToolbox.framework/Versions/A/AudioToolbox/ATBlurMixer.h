@interface ATBlurMixer : NSObject {
    struct unique_ptr<OpaqueAudioComponentInstance, applesauce::raii::detail::opaque_deletion_functor<OpaqueAudioComponentInstance *, &AudioComponentInstanceDispose>> { struct OpaqueAudioComponentInstance *__ptr_; } mAUDSPGraph;
    struct StreamDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mStreamDescription;
    unsigned int mMaxFrames;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mTuningDirectory;
    BOOL mIsInitialized;
    float mBlurHoldTimeSec;
    BOOL mRemoteFeedbackFeatureEnabled;
}

@property (readonly, nonatomic) BOOL isUplink;
@property (nonatomic, getter=isBlurEnabled) BOOL enableBlur;
@property (nonatomic) float blendTimeMs;
@property (readonly, nonatomic) id /* block */ processBlock;

- (int)configure;
- (int)setFormat:(unsigned int)a0;
- (id).cxx_construct;
- (struct OpaqueAudioComponentInstance { } *)audioUnit;
- (void).cxx_destruct;
- (struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *x0; } x0; })getDSPGraphPath;
- (int)setupAU;
- (float)blurHoldTimeSec;
- (struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *x0; } x0; })getAUStripPath;
- (unsigned int)getBusCountForScope:(unsigned int)a0;
- (struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *x0; } x0; })getPropStripPath;
- (id)initDownlinkWithFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 maxFrames:(unsigned int)a1 error:(id *)a2;
- (id)initInternalWithFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 maxFrames:(unsigned int)a1 isUplink:(BOOL)a2 error:(id *)a3;
- (id)initUplinkWithFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 maxFrames:(unsigned int)a1 error:(id *)a2;
- (int)initializeAU;
- (int)setAUStrip:(struct __CFDictionary { } *)a0 propertyStrip:(struct __CFDictionary { } *)a1;
- (int)setDSPGraph:(struct __CFString { } *)a0;
- (int)setElementCount:(unsigned int)a0;
- (int)setMaxFramesPerSlice;
- (int)uninitializeAU;
- (BOOL)updateFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 error:(id *)a1;
- (int)updateFormats;

@end
