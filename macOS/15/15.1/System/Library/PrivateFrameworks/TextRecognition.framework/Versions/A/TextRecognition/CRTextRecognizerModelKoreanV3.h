@interface CRTextRecognizerModelKoreanV3 : CRTextSequenceRecognizerTopKModelEspresso

+ (id)defaultModelFileName;

- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })characterBoxesOffsets;
- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })wordBoxesOffsets;

@end
