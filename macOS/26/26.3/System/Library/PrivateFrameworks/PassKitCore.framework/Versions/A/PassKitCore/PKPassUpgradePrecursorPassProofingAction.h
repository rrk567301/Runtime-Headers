@class NSString;

@interface PKPassUpgradePrecursorPassProofingAction : PKPassUpgradePrecursorPassAction

@property (readonly, nonatomic) NSString *productIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_dictionaryRepresentationInto:(id)a0;

@end
