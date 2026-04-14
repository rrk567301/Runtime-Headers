@interface IDSLogFormatter : NSObject

+ (id)descriptionForObject:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForObject:(id)a0 options:(unsigned long long)a1 level:(long long)a2;
+ (id)descriptionForDictionary:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForData:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForDictionary:(id)a0 options:(unsigned long long)a1 level:(long long)a2;
+ (id)descriptionForArray:(id)a0 options:(unsigned long long)a1 level:(long long)a2;
+ (id)descriptionForArray:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForString:(id)a0 options:(unsigned long long)a1;

@end
