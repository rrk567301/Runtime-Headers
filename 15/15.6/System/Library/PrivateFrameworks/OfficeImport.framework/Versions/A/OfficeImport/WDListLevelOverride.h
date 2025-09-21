@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    char mStartNumberOverridden;
}

- (id)description;
- (void).cxx_destruct;
- (unsigned char)level;
- (void)setStartNumber:(long long)a0;
- (id)initWithDocument:(id)a0 level:(unsigned char)a1;
- (char)isListLevelOverridden;
- (char)isStartNumberOverridden;
- (id)listLevel;
- (id)mutableListLevel;
- (long long)startNumber;

@end
