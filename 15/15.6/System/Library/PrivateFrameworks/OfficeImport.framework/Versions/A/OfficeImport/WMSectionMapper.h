@class WDSection;

@interface WMSectionMapper : CMMapper {
    WDSection *wdSection;
    float mTopMargin;
    float mLeftMargin;
    char mBreakAtStart;
    char mBreakAtEnd;
    char mIsTitlePage;
}

+ (char)isContentEmpty:(id)a0;

- (void).cxx_destruct;
- (float)leftMargin;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (float)topMargin;
- (void)MapSectionStyleAt:(id)a0;
- (id)initWithWDSection:(id)a0 breakAtStart:(char)a1 breakAtEnd:(char)a2 parent:(id)a3;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapFooterAt:(id)a0 withState:(id)a1;
- (void)mapHeaderAt:(id)a0 withState:(id)a1;

@end
