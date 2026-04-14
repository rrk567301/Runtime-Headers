@class NSArray;

@interface PPSSQLiteEntity : NSObject <NSCopying>

@property (readonly, copy) NSArray *tableNames;

- (id)joinClauses;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)disambiguatedSQLForProperty:(id)a0 shouldEscape:(BOOL)a1;
- (id)initWithTableNames:(id)a0;

@end
