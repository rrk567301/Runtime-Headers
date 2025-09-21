@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fonts;
- (void)clear;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (id)fontAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)createFontWithName:(id)a0;
- (id)fontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (unsigned long long)indexOfFont:(id)a0;

@end
