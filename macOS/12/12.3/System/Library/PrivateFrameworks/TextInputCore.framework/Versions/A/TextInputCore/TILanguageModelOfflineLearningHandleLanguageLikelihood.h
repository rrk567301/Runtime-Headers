@interface TILanguageModelOfflineLearningHandleLanguageLikelihood : TILanguageModelOfflineLearningHandle

- (void)load;
- (void)didFinishLearning;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;
- (void)updateAdaptationContext:(id)a0;

@end
