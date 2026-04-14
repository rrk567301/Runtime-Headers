@class NSNumber;

@interface UAExpressionUserSwitch : UAUserSwitch

@property (retain, nonatomic) NSNumber *expression;

- (id)propertyList;
- (void).cxx_destruct;
- (id)initWithExpression:(id)a0 actionType:(unsigned long long)a1 action:(unsigned long long)a2 customName:(id)a3 customNameIsLocalized:(BOOL)a4 uuid:(id)a5;
- (id)initWithTriggerType:(unsigned long long)a0 actionType:(unsigned long long)a1 action:(unsigned long long)a2 customName:(id)a3 customNameIsLocalized:(BOOL)a4 uuid:(id)a5;

@end
