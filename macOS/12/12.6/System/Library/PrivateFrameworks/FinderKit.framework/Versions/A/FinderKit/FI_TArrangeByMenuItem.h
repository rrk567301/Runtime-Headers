@class NSString, NSAttributedString;

@interface FI_TArrangeByMenuItem : NSMenuItem {
    struct TNSRef<NSString, void> { NSString *fRef; } _titleWhileHidden;
    struct TNSRef<NSAttributedString, void> { NSAttributedString *fRef; } _attributedTitleWhileHidden;
}

- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
