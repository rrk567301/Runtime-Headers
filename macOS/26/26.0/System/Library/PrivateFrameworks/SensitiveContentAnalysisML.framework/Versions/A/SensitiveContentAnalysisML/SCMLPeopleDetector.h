@class _TtC26SensitiveContentAnalysisML22SCMLPeopleDetectorImpl, NSLocale;

@interface SCMLPeopleDetector : NSObject {
    _TtC26SensitiveContentAnalysisML22SCMLPeopleDetectorImpl *_handler;
    struct unique_ptr<scml::MultiwordGazetteer, std::default_delete<scml::MultiwordGazetteer>> { struct MultiwordGazetteer *__ptr_; } _personOverrides;
}

@property (readonly, nonatomic) NSLocale *locale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)_detectPeopleAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (id)detectPeople:(id)a0 error:(id *)a1;
- (void)detectPeopleAsynchronously:(id)a0 completionHandler:(id /* block */)a1;

@end
