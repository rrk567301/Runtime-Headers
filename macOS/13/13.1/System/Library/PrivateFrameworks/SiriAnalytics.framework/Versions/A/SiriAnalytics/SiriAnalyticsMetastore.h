@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)bootstrap;
- (void)prune;
- (id)sensitiveConditionsWithBootSessionUUIDs:(id)a0;
- (BOOL)storeSensitiveConditionSpan:(id)a0 for:(id)a1 bootSessionUUID:(id)a2;
- (BOOL)endLastSpanWithClockIdentifier:(id)a0 conditionType:(int)a1 endedOn:(unsigned long long)a2;

@end
