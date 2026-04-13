@class NSTextList;

@interface __NSTextListTouchBarViewController : NSViewController {
    NSTextList *_textList;
}

@property (retain) NSTextList *textList;
@property (weak) id target;

+ (id)textListFormats;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_viewControllerSupports10_10Features;
- (id)textList;
- (void)setTextList:(id)a0;
- (void)_updateSelections;
- (void)_selectList:(id)a0;

@end
