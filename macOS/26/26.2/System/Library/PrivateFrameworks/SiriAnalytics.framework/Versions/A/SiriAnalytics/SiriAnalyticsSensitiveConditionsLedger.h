@interface SiriAnalyticsSensitiveConditionsLedger : NSObject {
    void /* unknown type, empty encoding */ starts;
    void /* unknown type, empty encoding */ clockIdentifier;
    void /* unknown type, empty encoding */ metastore;
}

- (void).cxx_destruct;
- (id)init;
- (void)startWithSensitiveCondition:(int)a0 at:(unsigned long long)a1;
- (void)endWithSensitiveCondition:(int)a0 at:(unsigned long long)a1;
- (id)initWithClockIdentifier:(id)a0 metastore:(id)a1;

@end
