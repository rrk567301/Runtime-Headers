@class INIntent;

@interface WFSiriKitIntentRequest : WFSiriActionRequest

@property (readonly, nonatomic) INIntent *intent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
