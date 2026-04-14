@interface SCMLTextModerationLM : NSObject {
    struct unique_ptr<scml::TextModerationLM, std::default_delete<scml::TextModerationLM>> { struct __compressed_pair<scml::TextModerationLM *, std::default_delete<scml::TextModerationLM>> { struct TextModerationLM *__value_; } __ptr_; } _moderationLM;
}

+ (BOOL)isKnownSupportedDevice;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithError:(id *)a0;
- (id)predict:(id)a0 error:(id *)a1;

@end
