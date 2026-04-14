@class NSString;

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) unsigned long long partOfDay;

+ (id)filter;
+ (id)filterWithPartOfDay:(unsigned long long)a0;
+ (unsigned long long)partOfDayForPartOfDayName:(id)a0;
+ (id)partOfDayNameForPartOfDay:(unsigned long long)a0;
+ (id)stringValueForPartOfDay:(unsigned long long)a0;

- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)description;
- (id)initWithPartOfDay:(unsigned long long)a0;

@end
