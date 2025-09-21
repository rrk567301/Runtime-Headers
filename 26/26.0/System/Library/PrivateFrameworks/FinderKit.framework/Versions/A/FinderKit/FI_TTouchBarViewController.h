@class NSStackView, NSString;

@interface FI_TTouchBarViewController : FI_TViewController <TMarkTornDown> {
    NSStackView *_stackView;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _viewWillAppearCallback;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _viewWillDisappearCallback;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _viewDidDisappearCallback;
}

@property (readonly, retain, nonatomic) NSStackView *stackView;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear;
- (id).cxx_construct;
- (void)initCommon;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)aboutToTearDown;
- (id)makeTouchBarView;
- (void)setViewDidDisappearCallback:(const void *)a0;
- (void)setViewWillAppearCallback:(const void *)a0;
- (void)setViewWillDisappearCallback:(const void *)a0;
- (const void *)viewDidDisappearCallback;
- (const void *)viewWillAppearCallback;
- (const void *)viewWillDisappearCallback;

@end
