@class NSURL;

@interface TextRecognition.CRTextOrientationModelV1 : CRTextSequenceRecognizerModelEspresso

@property (nonatomic, readonly) NSURL *modelURL;

+ (id)defaultURLOfModelInThisBundle;

- (id)init;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;

@end
