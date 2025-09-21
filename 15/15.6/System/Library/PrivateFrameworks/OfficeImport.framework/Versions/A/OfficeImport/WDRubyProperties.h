@interface WDRubyProperties : NSObject {
    unsigned char mOriginal : 1;
    struct { int x0; unsigned short x1; unsigned short x2; unsigned short x3; int x4; char x5; char x6; char x7; char x8; char x9; } *mOriginalProperties;
}

@property (nonatomic) int alignment;
@property (nonatomic) unsigned short phoneticGuideFontSize;
@property (nonatomic) unsigned short baseFontSize;
@property (nonatomic) unsigned short distanceBetween;
@property (nonatomic) int phoneticGuideLanguage;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)clearAlignment;
- (void)clearBaseFontSize;
- (void)clearDistanceBetween;
- (void)clearPhoneticGuideFontSize;
- (void)clearPhoneticGuideLanguage;
- (char)isAlignmentOverridden;
- (char)isAnythingOverridden;
- (char)isAnythingOverriddenIn:(struct { int x0; unsigned short x1; unsigned short x2; unsigned short x3; int x4; char x5; char x6; char x7; char x8; char x9; } *)a0;
- (char)isBaseFontSizeOverridden;
- (char)isDistanceBetweenOverridden;
- (char)isPhoneticGuideFontSizeOverridden;
- (char)isPhoneticGuideLanguageOverridden;

@end
