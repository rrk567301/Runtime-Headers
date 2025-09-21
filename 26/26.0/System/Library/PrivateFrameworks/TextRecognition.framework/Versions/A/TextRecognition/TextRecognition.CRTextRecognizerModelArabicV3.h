@interface TextRecognition.CRTextRecognizerModelArabicV3 : CRTextSequenceRecognizerModelEspresso

+ (id)defaultURLOfModelInThisBundle;

- (id)init;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;
- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })wordBoxesOffsets;

@end
