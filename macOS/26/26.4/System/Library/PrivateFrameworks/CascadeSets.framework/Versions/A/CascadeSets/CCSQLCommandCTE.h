@class NSString, CCDatabaseSelect;

@interface CCSQLCommandCTE : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CCDatabaseSelect *select;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 select:(id)a1;

@end
