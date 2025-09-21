@class CRTextSequenceRecognizerModel, NSOrderedSet, NSString;

@interface CRCTCCVNLPOrientationDecoder : NSObject <CRTextDecoding> {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _spaceLabels;
}

@property (retain) CRTextSequenceRecognizerModel *model;
@property (readonly, nonatomic) NSOrderedSet *characterObservations;
@property (readonly, nonatomic) char shouldUseModernizedDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_buildActivationMatrices:(id)a0;
- (struct vector<CoreRecognition::decoder::ActivationMatrix, std::allocator<CoreRecognition::decoder::ActivationMatrix>> { struct ActivationMatrix *x0; struct ActivationMatrix *x1; struct __compressed_pair<CoreRecognition::decoder::ActivationMatrix *, std::allocator<CoreRecognition::decoder::ActivationMatrix>> { struct ActivationMatrix *x0; } x2; })_buildModernizedActivationMatrices:(id)a0;
- (void)_create2DArraysFromInputArray:(id)a0 classSize:(unsigned long long *)a1 outputArrays:(void *)a2;
- (char)_decodeFeaturesWithInfo:(id)a0 decoderCallback:(id /* block */)a1 shouldDecodeScriptResult:(char)a2 shouldDecodeOrientationResult:(char)a3 shouldDecodeLayoutDirectionResult:(char)a4;
- (char)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (char)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 shouldDecodeScriptResult:(char)a2 shouldDecodeOrientationResult:(char)a3 shouldDecodeLayoutDirectionResult:(char)a4 error:(id *)a5;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (char)shouldDecodeWithLM;

@end
