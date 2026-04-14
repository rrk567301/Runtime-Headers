@interface PKPassUpgradePrecursorPassAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)precursorActionFromDictionary:(id)a0;

- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithType:(unsigned long long)a0;
- (void)_dictionaryRepresentationInto:(id)a0;

@end
