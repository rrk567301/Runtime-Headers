@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long long mStartNumber;
    int mNumberFormat;
    char mRestartNumbering;
    long long mRestartLevel;
    char mLegal;
    int mSuffix;
    NSMutableString *mText;
    char mLegacy;
    long long mLegacySpace;
    long long mLegacyIndent;
    int mJustification;
}

- (id)description;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setLegacy:(char)a0;
- (id)image;
- (id)text;
- (void)setText:(id)a0;
- (int)suffix;
- (char)legacy;
- (void)setSuffix:(int)a0;
- (id)initWithDocument:(id)a0;
- (char)legalOverridden;
- (void)setLegacySpace:(long long)a0;
- (void)setStartNumber:(long long)a0;
- (id)characterProperties;
- (char)imageBullet;
- (char)imageBulletOverridden;
- (int)justification;
- (char)justificationOverridden;
- (long long)legacyIndent;
- (long long)legacySpace;
- (char)legal;
- (int)numberFormat;
- (char)numberFormatOverridden;
- (id)paragraphProperties;
- (long long)restartLevel;
- (char)restartLevelOverridden;
- (char)restartNumbering;
- (char)restartNumberingOverridden;
- (void)setJustification:(int)a0;
- (void)setLegacyIndent:(long long)a0;
- (void)setLegal:(char)a0;
- (void)setNumberFormat:(int)a0;
- (void)setRestartLevel:(long long)a0;
- (void)setRestartNumbering:(char)a0;
- (long long)startNumber;
- (char)startNumberOverridden;
- (char)suffixOverridden;
- (char)textOverridden;

@end
