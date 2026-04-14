@class NSString;

@interface _EARGeoLMHelper : NSObject {
    struct unique_ptr<quasar::Geography, std::default_delete<quasar::Geography>> { struct Geography *__ptr_; } _geography;
    NSString *_locale;
}

- (id)locale;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 config:(id)a1;
- (id)regionIdForLatitude:(double)a0 longitude:(double)a1;
- (id)regionIdForLocale:(id)a0 latitude:(double)a1 longitude:(double)a2;

@end
