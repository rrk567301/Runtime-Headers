@class KHFrame;

@interface KHChildFrame : KHFrame {
    KHFrame *_parentFrame;
}

- (id)database;
- (id)parentFrame;
- (id)parentLayout;
- (void)setParentFrame:(id)a0;
- (id)themeDB;
- (id)themeBundle;

@end
