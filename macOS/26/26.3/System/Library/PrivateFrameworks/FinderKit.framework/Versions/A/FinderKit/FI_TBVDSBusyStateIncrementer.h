@class FI_TBrowserViewDataSource;

@interface FI_TBVDSBusyStateIncrementer : NSObject {
    struct TNSWeakPtr<FI_TBrowserViewDataSource> { FI_TBrowserViewDataSource *fWeakObject; } _weakDataSource;
}

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)aboutToTearDown;

@end
