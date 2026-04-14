@interface CKSQLiteTableEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)_cksql_isTableEntry;
+ (Class)tableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
