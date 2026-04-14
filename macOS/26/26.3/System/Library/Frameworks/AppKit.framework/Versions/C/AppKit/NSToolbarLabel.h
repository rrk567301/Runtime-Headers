@class NSString, NSLayoutConstraint;

@interface NSToolbarLabel : NSTextField {
    NSLayoutConstraint *_minimumWidthConstraint;
}

@property (copy) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateMinimumSize;
- (void)setBordered:(BOOL)a0;

@end
