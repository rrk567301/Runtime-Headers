@class NSString;

@interface COMTTypedAction : COMTAction

@property (readonly, nonatomic) NSString *targetType;

- (id)initWithType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
