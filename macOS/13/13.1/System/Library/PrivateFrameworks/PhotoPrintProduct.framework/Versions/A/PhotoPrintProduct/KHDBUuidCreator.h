@interface KHDBUuidCreator : NSObject

+ (id)newUniversallyUniqueString;
+ (id)universallyUniqueString;
+ (id)convertUniversallyUniqueString:(id)a0;
+ (id)convertToOldUniversallyUniqueString:(id)a0;
+ (id)convertOldUniversallyUniqueStringsToNew:(id)a0;
+ (id)convertNewUniversallyUniqueStringsToOld:(id)a0;

@end
