@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (unsigned char)level;
- (void).cxx_destruct;
- (id)description;
- (void)setStartNumber:(long long)a0;
- (id)initWithDocument:(id)a0 level:(unsigned char)a1;
- (BOOL)isListLevelOverridden;
- (BOOL)isStartNumberOverridden;
- (id)listLevel;
- (id)mutableListLevel;
- (long long)startNumber;

@end
