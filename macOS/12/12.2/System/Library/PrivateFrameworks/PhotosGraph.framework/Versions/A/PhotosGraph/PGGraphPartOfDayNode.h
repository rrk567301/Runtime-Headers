@class NSString;

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) unsigned long long partOfDay;

+ (id)filter;
+ (unsigned long long)partOfDayForPartOfDayName:(id)a0;
+ (id)partOfDayNameForPartOfDay:(unsigned long long)a0;
+ (id)stringValueForPartOfDay:(unsigned long long)a0;

- (id)description;
- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyDictionary;
- (id)initWithPartOfDay:(unsigned long long)a0;

@end
