@class NSArray, NLLanguageRecognizer;

@interface _LTTextLanguageDetector : NSObject {
    NLLanguageRecognizer *_recognizer;
}

@property (copy, nonatomic) NSArray *availableLocales;

- (id)init;
- (id)initWithModel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_mapSupportedLocales:(id)a0;
- (id)detectionForString:(id)a0;
- (id)detectionForStrings:(id)a0;
- (id)detectionForStrings:(id)a0 strategy:(unsigned long long)a1;

@end
