@interface SiriAnalyticsSensitiveConditionSpan : NSObject {
    BOOL _hasStartedAtValue;
    BOOL _hasEndedAtValue;
}

@property (nonatomic) int conditionType;
@property (nonatomic) unsigned long long startedAt;
@property (nonatomic) unsigned long long endedAt;

- (id)initWithConditionType:(int)a0 startedAt:(unsigned long long)a1;
- (BOOL)hasEndedAt;
- (BOOL)containsTimestamp:(unsigned long long)a0;

@end
