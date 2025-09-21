@class NSArray;

@interface MEMessageActionDecision : NSObject <NSSecureCoding>

@property (class, readonly) MEMessageActionDecision *invokeAgainWithBody;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) char invokeAgainWithBody;

+ (id)decisionApplyingAction:(id)a0;
+ (id)decisionApplyingActions:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActions:(id)a0 invokeAgainWithBody:(char)a1;

@end
