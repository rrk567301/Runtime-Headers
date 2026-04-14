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

- (void)setImage:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)setText:(id)a0;
- (id)image;
- (id)text;
- (int)suffix;
- (id)description;
- (void)setSuffix:(int)a0;
- (void).cxx_destruct;
- (void)setLegacy:(BOOL)a0;
- (BOOL)legacy;
- (BOOL)legalOverridden;
- (void)setLegacySpace:(long long)a0;
- (void)setStartNumber:(long long)a0;
- (id)characterProperties;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (int)justification;
- (BOOL)justificationOverridden;
- (long long)legacyIndent;
- (long long)legacySpace;
- (BOOL)legal;
- (int)numberFormat;
- (BOOL)numberFormatOverridden;
- (id)paragraphProperties;
- (long long)restartLevel;
- (BOOL)restartLevelOverridden;
- (BOOL)restartNumbering;
- (BOOL)restartNumberingOverridden;
- (void)setJustification:(int)a0;
- (void)setLegacyIndent:(long long)a0;
- (void)setLegal:(BOOL)a0;
- (void)setNumberFormat:(int)a0;
- (void)setRestartLevel:(long long)a0;
- (void)setRestartNumbering:(BOOL)a0;
- (long long)startNumber;
- (BOOL)startNumberOverridden;
- (BOOL)suffixOverridden;
- (BOOL)textOverridden;

@end
