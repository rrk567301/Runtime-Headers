@class NSArray;

@interface EMUndoMessageAction : EMMessageChangeAction

@property (readonly, copy, nonatomic) NSArray *individualActions;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithIndividualActions:(id)a0 origin:(long long)a1 actor:(long long)a2;

@end
