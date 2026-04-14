@class NSString, TGIE5ANESessionObjC;

@interface E5RunnerImageTokenizerObjC : NSObject <E5RunnerImageTokenizerObjCProtocol> {
    struct unique_ptr<cgm::token_generation_inference::ajax::ANEAJAXE5ImageTokenizer, std::default_delete<cgm::token_generation_inference::ajax::ANEAJAXE5ImageTokenizer>> { struct ANEAJAXE5ImageTokenizer *__ptr_; } _imageTokenizer;
    TGIE5ANESessionObjC *_aneSession;
}

@property (readonly) long long _inputBytesPerPixel;
@property (readonly) long long _inputImageDimension;
@property (readonly, nonatomic) int _embeddingsPerImageCount;
@property (readonly, nonatomic) int _encodedImageByteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithModelConfiguration:(id)a0 error:(id *)a1;
- (void)moveToDynamicState;
- (void)moveToFullyLoadedState;
- (void)tokenizeImageDataWithCallback:(id /* block */)a0 outputBlock:(id /* block */)a1;

@end
