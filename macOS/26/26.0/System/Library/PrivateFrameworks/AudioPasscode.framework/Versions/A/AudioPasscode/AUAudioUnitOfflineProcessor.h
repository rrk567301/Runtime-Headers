@class AUAudioUnit;

@interface AUAudioUnitOfflineProcessor : NSObject {
    struct unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> { struct OpaqueExtAudioFile *__ptr_; } _srcFile;
    struct unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> { struct OpaqueExtAudioFile *__ptr_; } _destFile;
    AUAudioUnit *_audioUnit;
    id /* block */ _renderBlock;
    struct BufferList { struct vector<char, std::allocator<char>> { char *__begin_; char *__end_; char *__cap_; } mStorage; } _srcBufferList;
    struct BufferList { struct vector<char, std::allocator<char>> { char *__begin_; char *__end_; char *__cap_; } mStorage; } _destBufferList;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _srcAudioStorage;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _destAudioStorage;
    id /* block */ _pullInputBlock;
}

@property (readonly, nonatomic) long long assetLength;

- (BOOL)run;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAudioUnit:(id)a0 inputFileURL:(id)a1 outputFileURL:(id)a2 ioSampleRate:(long long)a3;

@end
