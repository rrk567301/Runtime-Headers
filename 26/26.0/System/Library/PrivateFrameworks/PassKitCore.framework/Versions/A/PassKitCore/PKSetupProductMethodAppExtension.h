@class NSExtension;

@interface PKSetupProductMethodAppExtension : PKSetupProductMethod

@property (readonly, nonatomic) NSExtension *provisioningExtension;
@property (nonatomic) BOOL requiresAuthorization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)initWithExtension:(id)a0 status:(BOOL)a1 partnerIdentifier:(id)a2;

@end
