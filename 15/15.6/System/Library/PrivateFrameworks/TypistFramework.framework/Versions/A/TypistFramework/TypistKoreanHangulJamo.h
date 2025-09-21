@interface TypistKoreanHangulJamo : NSObject {
    unsigned short _jamo;
    int _hangulJamoPosition;
    char _isConsonantVariant;
    char _isVerticalVowel;
}

+ (id)leadingConsonants;
+ (id)trailingConsonants;
+ (id)vowels;

- (id)description;
- (char)isVerticalVowel;
- (int)_getJamoType:(unsigned short)a0 withOrderInSyllable:(unsigned long long)a1;
- (char)_isConsonantVariant:(unsigned short)a0;
- (char)_isVerticalVowel:(unsigned short)a0;
- (int)hangulJamoPosition;
- (id)initWithJamo:(unsigned short)a0 position:(unsigned long long)a1;
- (char)isConsonantVariant;
- (unsigned short)jamo;

@end
