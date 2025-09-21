@class GDFeedbackServiceInner;

@interface GDFeedbackService : NSObject {
    GDFeedbackServiceInner *_inner;
}

- (id)init;
- (void).cxx_destruct;
- (char)recordFeedback:(id)a0 error:(id *)a1;
- (char)recordFeedback:(id)a0 forEvent:(long long)a1 error:(id *)a2;

@end
