@class NSArray;

@interface PKPassUpgradePrecursorPassRequest : PKPassUpgradeRequest

@property (readonly, nonatomic) NSArray *actions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_dictionaryRepresentationInto:(id)a0;

@end
