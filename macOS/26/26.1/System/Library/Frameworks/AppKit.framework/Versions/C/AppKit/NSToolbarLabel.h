@class NSString, NSLayoutConstraint;

@interface NSToolbarLabel : NSTextField {
    NSLayoutConstraint *_minimumWidthConstraint;
}

@property (copy) NSString *title;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_updateMinimumSize;
- (void)setBordered:(BOOL)a0;

@end
