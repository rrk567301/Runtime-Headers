@class NSDictionary, TCProofreadingReviewRunner;

@interface TCProofreadingReviewEditor : NSObject <TCPostEditing> {
    NSDictionary *_options;
    TCProofreadingReviewRunner *_runner;
}

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)cachedCheckString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 options:(id)a4 mutableResults:(id)a5;
- (BOOL)checkSentence:(id)a0 locale:(id)a1 offset:(unsigned long long)a2 options:(id)a3 cachedOnly:(BOOL)a4 mutableResults:(id)a5;
- (void)checkString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 options:(id)a4 mutableResults:(id)a5;
- (void)loadModelsInBackground:(BOOL)a0;
- (void)resetModels;
- (BOOL)shouldReportDetail:(id)a0 replacedString:(id)a1 replacementString:(id)a2;

@end
