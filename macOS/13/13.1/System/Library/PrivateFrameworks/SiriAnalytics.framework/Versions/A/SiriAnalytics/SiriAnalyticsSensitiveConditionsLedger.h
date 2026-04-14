@interface SiriAnalyticsSensitiveConditionsLedger : NSObject {
    void /* unknown type, empty encoding */ spans;
    void /* unknown type, empty encoding */ clockIdentifier;
    void /* unknown type, empty encoding */ bootSessionUUID;
    void /* unknown type, empty encoding */ metastore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:(id)a0 metastore:(id)a1;
- (void)startWithSensitiveCondition:(int)a0 at:(unsigned long long)a1;
- (void)endWithSensitiveCondition:(int)a0 at:(unsigned long long)a1;
- (id)processWithNanosecondsSinceBoot:(unsigned long long)a0 tlut:(id)a1;
- (id)allSpans;

@end
