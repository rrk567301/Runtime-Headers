@class NSArray;

@interface PKPassUpgradePrecursorPassRequest : PKPassUpgradeRequest

@property (readonly, nonatomic) NSArray *actions;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_dictionaryRepresentationInto:(id)a0;

@end
