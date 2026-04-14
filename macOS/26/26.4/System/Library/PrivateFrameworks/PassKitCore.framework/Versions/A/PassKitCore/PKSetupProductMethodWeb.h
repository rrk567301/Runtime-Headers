@interface PKSetupProductMethodWeb : PKSetupProductMethod

@property (readonly, nonatomic) unsigned long long webType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)initWithDictionary:(id)a0 partnerIdentifier:(id)a1;

@end
