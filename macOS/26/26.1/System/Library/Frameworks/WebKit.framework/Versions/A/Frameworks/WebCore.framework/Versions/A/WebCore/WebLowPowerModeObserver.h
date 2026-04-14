@interface WebLowPowerModeObserver : NSObject

@property (nonatomic) struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> { struct LowPowerModeNotifier *m_ptr; } notifier;
@property (readonly, nonatomic) BOOL isLowPowerModeEnabled;

- (id).cxx_construct;
- (void)detach;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_didReceiveLowPowerModeChange;
- (id)initWithNotifier:(void *)a0;

@end
