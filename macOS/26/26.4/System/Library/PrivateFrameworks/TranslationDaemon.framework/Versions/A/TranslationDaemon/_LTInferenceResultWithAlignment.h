@class NSString, NSArray;

@interface _LTInferenceResultWithAlignment : NSObject {
    void /* function */ translatedText;
    void /* function */ alignments;
}

@property (nonatomic, copy) NSString *translatedText;
@property (nonatomic, copy) NSArray *alignments;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTranslation:(id)a0 alignments:(id)a1;

@end
