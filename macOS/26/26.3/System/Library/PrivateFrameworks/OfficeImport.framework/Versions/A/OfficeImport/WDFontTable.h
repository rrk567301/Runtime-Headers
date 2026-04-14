@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fonts;
- (id)fontAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void)clear;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)createFontWithName:(id)a0;
- (id)fontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (unsigned long long)indexOfFont:(id)a0;

@end
