@class FI_TBrowserViewDataSource;

@interface FI_TBVDSBusyStateIncrementer : NSObject {
    struct TNSWeakPtr<FI_TBrowserViewDataSource> { FI_TBrowserViewDataSource *fWeakObject; } _weakDataSource;
}

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)aboutToTearDown;

@end
