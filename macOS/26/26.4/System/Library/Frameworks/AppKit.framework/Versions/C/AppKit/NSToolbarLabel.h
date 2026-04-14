@class NSString, NSLayoutConstraint;

@interface NSToolbarLabel : NSTextField {
    NSLayoutConstraint *_minimumWidthConstraint;
}

@property (copy) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateMinimumSize;
- (void)setBordered:(BOOL)a0;

@end
