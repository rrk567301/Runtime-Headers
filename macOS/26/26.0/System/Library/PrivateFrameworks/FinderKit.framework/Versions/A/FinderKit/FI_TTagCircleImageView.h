@class NSNumber, NSObject;

@interface FI_TTagCircleImageView : FI_TImageView {
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _colorNumberBinder;
}

@property (retain, nonatomic) NSNumber *colorNumber;

- (void)dealloc;
- (void)updateImage;
- (id).cxx_construct;
- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (long long)backgroundStyle;
- (BOOL)accessibilityIsIgnored;
- (void)awakeFromNib;
- (void)viewWillMoveToSuperview:(id)a0;

@end
