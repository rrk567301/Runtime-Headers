@class NSString;

@interface PPSSQLitePropertyPredicate : PPSSQLitePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
