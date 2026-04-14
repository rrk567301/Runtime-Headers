@interface SSFuzzyMatchScoring : NSObject

+ (int)bonusFor:(int)a0 charClass:(int)a1;
+ (int)charClass:(unsigned int)a0;
+ (id)fuzzymatch:(id)a0 pattern:(id)a1;
+ (BOOL)patternCanMatch:(id)a0 pattern:(id)a1;
+ (id)stringToUint32Array:(id)a0;

@end
