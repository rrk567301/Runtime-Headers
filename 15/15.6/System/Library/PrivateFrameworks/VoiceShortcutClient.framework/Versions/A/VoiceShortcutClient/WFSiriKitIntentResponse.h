@class INInteraction;

@interface WFSiriKitIntentResponse : WFSiriActionResponse

@property (readonly, nonatomic) INInteraction *interaction;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInteraction:(id)a0 andError:(id)a1;

@end
