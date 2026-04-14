@class NSNumber, NSObject;

@interface FI_TTagCircleImageView : FI_TImageView {
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _colorNumberBinder;
}

@property (retain, nonatomic) NSNumber *colorNumber;

- (long long)backgroundStyle;
- (void)updateImage;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (id).cxx_construct;
- (void)dealloc;
- (BOOL)accessibilityIsIgnored;
- (void)awakeFromNib;
- (void)viewWillMoveToSuperview:(id)a0;

@end
