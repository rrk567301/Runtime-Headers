@class FI_TBrowserViewDataSource;

@interface FI_TBVDSBusyStateIncrementer : NSObject {
    struct TNSWeakPtr<FI_TBrowserViewDataSource> { FI_TBrowserViewDataSource *fWeakObject; } _weakDataSource;
}

- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;

@end
