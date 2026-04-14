@class GDFeedbackServiceInner;

@interface GDFeedbackService : NSObject {
    GDFeedbackServiceInner *_inner;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)recordFeedback:(id)a0 error:(id *)a1;
- (BOOL)recordFeedback:(id)a0 forEvent:(long long)a1 error:(id *)a2;

@end
