@class NSDictionary;

@interface Sage.BindingVariablesXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _bindingVariables;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *_bindingVariables;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
