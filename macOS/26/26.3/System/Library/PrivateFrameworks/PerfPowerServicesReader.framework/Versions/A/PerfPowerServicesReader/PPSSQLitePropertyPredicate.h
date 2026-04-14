@class NSString;

@interface PPSSQLitePropertyPredicate : PPSSQLitePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSString *property;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
