@class NSURL, NSArray;

@interface PKSetupProductMethodInApp : PKSetupProductMethod

@property (readonly, copy, nonatomic) NSURL *appLaunchURL;
@property (readonly, copy, nonatomic) NSArray *cardTypeSupport;
@property (readonly, copy, nonatomic) NSArray *associatedStoreIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)initWithDictionary:(id)a0 partnerIdentifier:(id)a1;
- (id)initWithURL:(id)a0 identifiers:(id)a1 cardTypeSupport:(id)a2 identifier:(id)a3;

@end
