@protocol WFToolKitVariableContent;

@interface WFAnyToolKitVariableContent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) id<WFToolKitVariableContent> variableContent;

+ (id)objectWithVariableContent:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVariableContent:(id)a0;

@end
