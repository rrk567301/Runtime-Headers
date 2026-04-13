@interface KHDBUuidCreator : NSObject

+ (id)universallyUniqueString;
+ (id)convertToOldUniversallyUniqueString:(id)a0;
+ (id)convertUniversallyUniqueString:(id)a0;
+ (id)newUniversallyUniqueString;
+ (id)convertOldUniversallyUniqueStringsToNew:(id)a0;
+ (id)convertNewUniversallyUniqueStringsToOld:(id)a0;

@end
