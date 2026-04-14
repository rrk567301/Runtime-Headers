@class _EARPeopleSuggesterConfig;

@interface _EARUserProfileConfig : NSObject {
    struct unique_ptr<quasar::LmeConfig, std::default_delete<quasar::LmeConfig>> { struct { struct LmeConfig *__ptr_; } ; } lmeConfig;
}

@property (readonly, nonatomic) _EARPeopleSuggesterConfig *peopleSuggesterConfig;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0 overrides:(id)a1;

@end
