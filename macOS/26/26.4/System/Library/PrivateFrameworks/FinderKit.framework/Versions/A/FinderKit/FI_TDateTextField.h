@class NSDateInterval, NSDate, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TDateTextField : FI_TTextField {
    struct vector<TFormattedDateEntry, std::allocator<TFormattedDateEntry>> { struct TFormattedDateEntry *__begin_; struct TFormattedDateEntry *__end_; struct { struct TFormattedDateEntry *__cap_; } ; } _dateFormatTable;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _dateTimeFormatterChangedObserver;
}

@property (nonatomic) BOOL suspendReformat;
@property (nonatomic) BOOL autoFormatToFit;
@property (nonatomic) BOOL useRelativeDates;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDateInterval *dateInterval;

+ (Class)cellClass;

- (void)setMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setObjectValue:(id)a0;
- (void)initCommon;
- (void)setFont:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setControlSize:(unsigned long long)a0;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)applySettingsFrom:(id)a0;
- (double)availableTextWidth;
- (void)awakeCommon;
- (struct CGSize { double x0; double x1; })calcIdealSizeImpl;
- (void)formatToFit;
- (void)reformat;
- (double)smallestWidthForCurrentFormat;

@end
