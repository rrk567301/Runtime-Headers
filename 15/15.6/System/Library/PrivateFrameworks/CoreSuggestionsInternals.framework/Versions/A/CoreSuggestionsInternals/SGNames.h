@interface SGNames : NSObject

+ (double)unnormalizedNameSimilarity:(id)a0 and:(id)a1;
+ (unsigned int)attributesForNameWord:(id)a0;
+ (id)bestName:(id)a0;
+ (id)cjkSpacerCharacters;
+ (id)cjkSpacersToWhiteSpace:(id)a0;
+ (id)cleanName:(id)a0;
+ (id)handleLastNameFirstOrder:(id)a0;
+ (char)isCapitalized:(id)a0;
+ (char)isCommonNameWord:(id)a0;
+ (char)isCommonVietnameseSurname:(id)a0;
+ (char)isDifficultName:(id)a0;
+ (char)isFamilyName:(id)a0;
+ (char)isLowercaseStringCommonNameWord:(id)a0;
+ (char)isProbablyShortCJKName:(id)a0;
+ (char)isSalientName:(id)a0;
+ (char)isSalientNameByChars:(id)a0;
+ (id)nameFromEmail:(id)a0;
+ (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 8; unsigned int x5 : 20; })namePayload:(id)a0;
+ (double)nameSimilarity:(id)a0 and:(id)a1;
+ (id)nameStringFromEmailAddress:(id)a0;
+ (char)namesApproximatelyMatch:(id)a0 and:(id)a1;
+ (char)namesApproximatelyMatch:(id)a0 and:(id)a1 threshold:(double)a2;
+ (id)possibleNameStringFromEmailAddress:(id)a0;
+ (id)sgNameFromString:(id)a0 origin:(id)a1 recordId:(id)a2 extractionInfo:(id)a3;
+ (char)shouldInvertOrderOfFirst:(id)a0 last:(id)a1;
+ (id)sketchesForName:(id)a0;
+ (id)stripAndReturnHonorifics:(id)a0;
+ (id)stripHonorifics:(id)a0;
+ (id)surnameFromName:(id)a0;
+ (id)universalCleanName:(id)a0;
+ (char)unnormalizedNamesApproximatelyMatch:(id)a0 and:(id)a1;
+ (char)unnormalizedNamesApproximatelyMatch:(id)a0 and:(id)a1 threshold:(double)a2;

@end
