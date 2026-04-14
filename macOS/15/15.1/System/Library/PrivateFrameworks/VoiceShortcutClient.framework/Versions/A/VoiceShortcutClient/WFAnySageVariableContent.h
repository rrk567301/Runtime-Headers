@protocol WFSageVariableContent;

@interface WFAnySageVariableContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id<WFSageVariableContent> variableContent;

+ (id)objectWithVariableContent:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVariableContent:(id)a0;

@end
