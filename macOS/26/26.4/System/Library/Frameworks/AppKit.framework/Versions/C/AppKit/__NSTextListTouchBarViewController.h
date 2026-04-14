@class NSTextList;

@interface __NSTextListTouchBarViewController : NSViewController {
    NSTextList *_textList;
}

@property (retain) NSTextList *textList;
@property (weak) id target;

+ (id)textListFormats;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)textList;
- (void)_selectList:(id)a0;
- (void)_updateSelections;
- (BOOL)_viewControllerSupports10_10Features;
- (void)setTextList:(id)a0;

@end
