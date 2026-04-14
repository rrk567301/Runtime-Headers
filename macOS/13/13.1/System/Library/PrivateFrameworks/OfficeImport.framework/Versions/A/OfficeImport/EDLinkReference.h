@interface EDLinkReference : NSObject {
    unsigned long long mLinkIndex;
    unsigned long long mFirstSheetIndex;
    unsigned long long mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithLinkIndex:(unsigned long long)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;
- (unsigned long long)firstSheetIndex;
- (void)setFirstSheetIndex:(unsigned long long)a0;
- (unsigned long long)lastSheetIndex;
- (void)setLastSheetIndex:(unsigned long long)a0;
- (unsigned long long)linkIndex;
- (void)setLinkIndex:(unsigned long long)a0;
- (BOOL)isEqualToLinkReference:(id)a0;
- (BOOL)isWorkbookLevelReference;

@end
