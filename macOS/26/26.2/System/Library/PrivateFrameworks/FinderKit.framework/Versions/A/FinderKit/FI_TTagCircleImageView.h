@class NSNumber, NSObject;

@interface FI_TTagCircleImageView : FI_TImageView {
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _colorNumberBinder;
}

@property (retain, nonatomic) NSNumber *colorNumber;

- (void)updateImage;
- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)backgroundStyle;
- (void)dealloc;
- (BOOL)accessibilityIsIgnored;
- (void)awakeFromNib;
- (void)viewWillMoveToSuperview:(id)a0;

@end
