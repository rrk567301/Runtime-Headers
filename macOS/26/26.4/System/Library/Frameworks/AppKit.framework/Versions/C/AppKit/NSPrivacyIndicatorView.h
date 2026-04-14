@class NSStatusItem;
@protocol NSPrivacyIndicatorViewDelegate;

@interface NSPrivacyIndicatorView : NSView {
    NSStatusItem *_indicatedStatusItem;
    long long _type;
}

@property double requiredWidth;
@property (weak) id<NSPrivacyIndicatorViewDelegate> delegate;
@property long long type;

+ (void)initialize;

- (void)layout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (unsigned int)_slsType;
- (void)renewGState;

@end
