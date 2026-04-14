@class EDResources;

@interface CHDLegendEntry : NSObject {
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (id)description;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)a0;
- (id)initWithResources:(id)a0;
- (unsigned long long)fontIndex;
- (void)setFontIndex:(unsigned long long)a0;
- (unsigned int)entryIndex;
- (void)setEntryIndex:(unsigned int)a0;

@end
