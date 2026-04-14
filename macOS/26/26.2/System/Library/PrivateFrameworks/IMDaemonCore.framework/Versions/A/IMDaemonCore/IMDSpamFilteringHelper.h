@interface IMDSpamFilteringHelper : NSObject {
    void /* unknown type, empty encoding */ debugUIService;
}

+ (id)sharedHelper;

- (void).cxx_destruct;
- (id)init;
- (id)eventPayloadFor:(long long)a0 service:(id)a1;
- (void)presentDebugUI;
- (void)recordJunkMetricsForSpamDetectionSource:(long long)a0 service:(id)a1;
- (void)recordNotJunkMetricsForSpamDetectionSource:(long long)a0 service:(id)a1;

@end
