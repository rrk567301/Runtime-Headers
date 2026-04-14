@class NSArray;

@interface TPSActionableContent : TPSContent

@property (copy, nonatomic) NSArray *actions;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
