@class NSValue;

@interface FI_TBVDSBusyStateIncrementer : NSObject {
    struct TNSWeakPtr<FI_TBrowserViewDataSource, void> { NSValue *fWeakObject; } _weakDataSource;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDataSource:(id)a0;
- (void)aboutToTearDown;

@end
