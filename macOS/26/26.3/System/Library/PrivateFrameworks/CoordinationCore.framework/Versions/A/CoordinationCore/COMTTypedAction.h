@class NSString;

@interface COMTTypedAction : COMTAction

@property (readonly, nonatomic) NSString *targetType;

- (id)initWithType:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
