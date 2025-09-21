@interface TextRecognition.CRTextRecognizerModelChineseV3 : CRTextSequenceRecognizerTopKModelEspresso

@property (nonatomic, readonly) BOOL supportCharacterBoxes;

+ (id)defaultURLOfModelInThisBundle;

- (id)init;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;

@end
