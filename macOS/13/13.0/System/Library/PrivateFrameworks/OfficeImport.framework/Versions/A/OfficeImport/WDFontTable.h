@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)description;
- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)clear;
- (id)fonts;
- (id)fontAtIndex:(unsigned long long)a0;
- (id)fontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (id)createFontWithName:(id)a0;
- (unsigned long long)indexOfFont:(id)a0;

@end
