@interface WebLowPowerModeObserver : NSObject

@property (nonatomic) struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> { struct LowPowerModeNotifier *m_ptr; } notifier;
@property (readonly, nonatomic) BOOL isLowPowerModeEnabled;

- (void)detach;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)_didReceiveLowPowerModeChange;
- (id)initWithNotifier:(void *)a0;

@end
