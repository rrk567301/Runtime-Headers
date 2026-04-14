@class NSArray;

@interface TPSFullTipContent : TPSActionableContent

@property (copy, nonatomic) NSArray *footnoteContent;

+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
