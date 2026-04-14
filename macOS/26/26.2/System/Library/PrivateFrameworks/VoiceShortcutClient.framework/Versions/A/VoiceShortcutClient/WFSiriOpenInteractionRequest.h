@class INInteraction;

@interface WFSiriOpenInteractionRequest : WFSiriActionRequest

@property (readonly, nonatomic) INInteraction *interaction;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInteraction:(id)a0;

@end
