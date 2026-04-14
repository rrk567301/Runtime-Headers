@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (id)description;
- (void).cxx_destruct;
- (unsigned char)level;
- (id)initWithDocument:(id)a0 level:(unsigned char)a1;
- (long long)startNumber;
- (void)setStartNumber:(long long)a0;
- (BOOL)isStartNumberOverridden;
- (id)listLevel;
- (id)mutableListLevel;
- (BOOL)isListLevelOverridden;

@end
