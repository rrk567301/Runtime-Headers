@class CKVLocalization;

@interface CKVTaskSettings : NSObject {
    _Atomic BOOL _evaluationEnabled;
    _Atomic BOOL _evaluationWithProfileEnabled;
}

@property (readonly) CKVLocalization *localization;

+ (id)defaultSettings;
+ (id)buildVersion;
+ (id)projectNameAndSourceVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocalization:(id)a0;
- (char)isEvaluationEnabled;
- (char)isEvaluationWithProfile;
- (char)isTaskCoalescenceDisabled;
- (char)isTaskEnabled:(unsigned short)a0 reason:(unsigned short)a1;
- (void)refreshLocalization;
- (void)setEvaluationEnabled:(char)a0;
- (void)setEvaluationWithProfile:(char)a0;
- (void)setTaskCoalescenceDisabled:(char)a0;

@end
