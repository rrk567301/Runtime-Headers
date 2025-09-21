@interface PKMutableBOM : PKBOM

- (char)addFile:(id)a0 forBomPath:(id)a1 includeACLs:(char)a2;
- (char)_addAppleDoubleAsNeededForForDirectory:(id)a0 includeACLs:(char)a1 withError:(id *)a2;
- (char)_addAppleDoubleForFile:(id)a0 forBOMPath:(id)a1 withError:(id *)a2;
- (char)_needAppleDoubleForPath:(id)a0 includeACLs:(char)a1;
- (struct __CFArray { } *)_newBOMPatternList:(id)a0;
- (char)addBomPath:(id)a0 fileType:(id)a1;
- (char)commitData;
- (id)initForWritingToPath:(id)a0;
- (id)initWithDirectory:(id)a0 writingToPath:(id)a1 includeACLs:(char)a2 maskPatterns:(id)a3;
- (id)initWithDirectory:(id)a0 writingToPath:(id)a1 includeACLs:(char)a2 maskPatterns:(id)a3 withError:(id *)a4;
- (char)setAttributes:(id)a0 ofItemAtPath:(id)a1;

@end
