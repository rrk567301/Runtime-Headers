@class NSString;

@interface PKPassTileValueText : PKPassTileValue

@property (copy, nonatomic) NSString *content;

+ (BOOL)supportsSecureCoding;
+ (id)createWithContent:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedValueWithBundle:(id)a0 privateBundle:(id)a1;
- (id)displayableStringWithPassState:(id)a0 inContext:(long long)a1;

@end
