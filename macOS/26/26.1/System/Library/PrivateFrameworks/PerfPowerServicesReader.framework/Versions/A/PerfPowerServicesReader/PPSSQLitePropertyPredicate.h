@class NSString;

@interface PPSSQLitePropertyPredicate : PPSSQLitePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSString *property;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
