@interface SiriAnalyticsSensitiveConditionSpan : NSObject {
    char _hasStartedAtValue;
    char _hasEndedAtValue;
}

@property (nonatomic) int conditionType;
@property (nonatomic) unsigned long long startedAt;
@property (nonatomic) unsigned long long endedAt;

- (char)containsTimestamp:(unsigned long long)a0;
- (char)hasEndedAt;
- (id)initWithConditionType:(int)a0 startedAt:(unsigned long long)a1;

@end
