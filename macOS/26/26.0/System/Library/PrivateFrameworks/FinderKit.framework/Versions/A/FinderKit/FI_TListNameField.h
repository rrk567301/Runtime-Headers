@class NSObject;
@protocol TListNameFieldDelegate;

@interface FI_TListNameField : FI_TListTextField {
    struct TNSWeakPtr<NSObject<TListNameFieldDelegate>> { NSObject<TListNameFieldDelegate> *fWeakObject; } _weakLNFDelegate;
}

@property (weak, nonatomic) NSObject<TListNameFieldDelegate> *lnfDelegate;
@property (nonatomic) BOOL becomingFirstResponder;
@property (nonatomic) BOOL shouldEdit;
@property (nonatomic) double maxWidthAvailable;

+ (Class)cellClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)becomeFirstResponder;
- (id).cxx_construct;
- (void)initCommon;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)isLTRLocalization;
- (void)updateTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editorViewMaxFrame;

@end
