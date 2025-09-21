@class NSArray;

@interface PKPassUpgradeExpressAutomaticSelectionCriteriaRequest : PKPassUpgradeRequest

@property (readonly, nonatomic) NSArray *technologyTypes;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
