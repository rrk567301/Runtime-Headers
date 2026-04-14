@class NSArray;

@interface PKSetupProductMethodCameraCapture : PKSetupProductMethod

@property (readonly, copy, nonatomic) NSArray *cardTypeSupport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)initWithCardTypeSupport:(id)a0 partnerIdentifier:(id)a1;
- (id)initWithDictionary:(id)a0 partnerIdentifier:(id)a1;

@end
