@interface PSIQueryToken : NSObject

@property (readonly, nonatomic) unsigned long long userCategory;
@property (nonatomic) BOOL userControlledCategoriesUseWildcard;

- (id)initWithIdentifier:(id)a0 userCategory:(unsigned long long)a1;
- (id)initWithText:(id)a0 userCategory:(unsigned long long)a1 matchType:(unsigned long long)a2;

@end
