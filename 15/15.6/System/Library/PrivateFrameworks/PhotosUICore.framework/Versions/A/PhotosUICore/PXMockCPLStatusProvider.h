@class PXCPLStatus, NSString;

@interface PXMockCPLStatusProvider : PXObservable <PXSettingsKeyObserver, PXCPLStatusProvider> {
    char _userDefaultsMocks;
}

@property (class, readonly) char shouldUseMockService;

@property (retain, nonatomic) PXCPLStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_currentMockedStatus;
+ (id)mockStatusProvider;
+ (id)userDefaultsMockStatusProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateStatus;
- (id)initWithUserDefaultsMocks:(char)a0;
- (double)nextOverrideResumeTimeInterval;

@end
