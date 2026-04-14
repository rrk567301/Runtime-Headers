@class NSString;

@interface TPSChecklistContent : TPSContent

@property (copy, nonatomic) NSString *subtitle;

+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
