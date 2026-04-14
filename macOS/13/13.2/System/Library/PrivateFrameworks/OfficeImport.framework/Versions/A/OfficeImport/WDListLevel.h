@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long long mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    long long mRestartLevel;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    long long mLegacySpace;
    long long mLegacyIndent;
    int mJustification;
}

- (id)description;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setLegacy:(BOOL)a0;
- (BOOL)legacy;
- (id)image;
- (id)text;
- (id)initWithDocument:(id)a0;
- (void)setText:(id)a0;
- (int)suffix;
- (void)setSuffix:(int)a0;
- (id)paragraphProperties;
- (BOOL)startNumberOverridden;
- (int)numberFormat;
- (void)setNumberFormat:(int)a0;
- (BOOL)numberFormatOverridden;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (BOOL)restartNumbering;
- (void)setRestartNumbering:(BOOL)a0;
- (BOOL)restartNumberingOverridden;
- (long long)restartLevel;
- (void)setRestartLevel:(long long)a0;
- (BOOL)restartLevelOverridden;
- (BOOL)legal;
- (void)setLegal:(BOOL)a0;
- (BOOL)legalOverridden;
- (BOOL)suffixOverridden;
- (BOOL)textOverridden;
- (long long)legacySpace;
- (void)setLegacySpace:(long long)a0;
- (long long)legacyIndent;
- (void)setLegacyIndent:(long long)a0;
- (BOOL)justificationOverridden;
- (long long)startNumber;
- (void)setStartNumber:(long long)a0;
- (id)characterProperties;
- (int)justification;
- (void)setJustification:(int)a0;

@end
