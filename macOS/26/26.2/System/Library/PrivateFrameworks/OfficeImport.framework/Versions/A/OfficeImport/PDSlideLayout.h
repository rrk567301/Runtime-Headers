@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {
    int mSlideLayoutType;
}

@property (weak) PDSlideMaster *slideMaster;

- (id)background;
- (void).cxx_destruct;
- (id)transition;
- (id)description;
- (id)parentSlideBase;
- (int)slideLayoutType;
- (void)doneWithContent;
- (id)defaultTheme;
- (id)initWithSlideMaster:(id)a0;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (void)setSlideLayoutType:(int)a0;

@end
