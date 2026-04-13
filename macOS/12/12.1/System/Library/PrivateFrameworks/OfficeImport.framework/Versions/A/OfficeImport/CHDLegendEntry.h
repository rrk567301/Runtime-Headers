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
- (void)setFontIndex:(unsigned long long)a0;
- (void)setEntryIndex:(unsigned int)a0;
- (unsigned long long)fontIndex;
- (unsigned int)entryIndex;

@end
