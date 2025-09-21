@interface CKSQLiteTableEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (char)_cksql_isTableEntry;
+ (Class)tableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
