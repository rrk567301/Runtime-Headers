@class NSDictionary;

@interface Sage.BindingVariablesXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _bindingVariables;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *_bindingVariables;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
