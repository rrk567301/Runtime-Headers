@class NSMutableArray;

@interface TypistKoreanHangulSyllable : NSObject {
    NSMutableArray *jamosInSyllable;
    int _syllableStructure;
    char _hasConsonantVariants;
}

@property (nonatomic) unsigned short syllable;

+ (id)decomposeSyllableForScribble:(unsigned short)a0;
+ (char)isKoreanSyllable:(unsigned short)a0;

- (void).cxx_destruct;
- (int)_determineSyllableStructure:(unsigned long long)a0 vowelPositionType:(int)a1;
- (char)_hasConsonantVariants:(id)a0;
- (char)hasConsonantVariants;
- (id)initWithSyllable:(unsigned short)a0;
- (id)jamos;
- (int)syllableStructure;

@end
