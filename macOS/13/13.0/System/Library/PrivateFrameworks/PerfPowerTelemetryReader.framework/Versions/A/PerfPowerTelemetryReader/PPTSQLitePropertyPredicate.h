@class NSString;

@interface PPTSQLitePropertyPredicate : PPTSQLitePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSString *property;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
