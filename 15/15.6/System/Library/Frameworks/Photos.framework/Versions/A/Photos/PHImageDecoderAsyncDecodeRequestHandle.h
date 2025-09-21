@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _cancelFlag;
    char _cancelRequested;
}

@property (nonatomic) unsigned long long figRequestID;
@property (nonatomic) unsigned long long figGainMapRequestID;
@property (retain, nonatomic) struct CMPhotoDecompressionContainer { } *c;
@property (retain, nonatomic) struct CMPhotoDecompressionContainer { } *figDecompressionContainer;
@property (readonly, nonatomic) char cancelRequested;
@property (readonly, nonatomic) PHImageDecoder *initialDecoder;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithFigRequestID:(unsigned long long)a0 container:(struct CMPhotoDecompressionContainer { } *)a1 figDecoder:(id)a2;
- (id)initWithImageIODecoder:(id)a0;

@end
