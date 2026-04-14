@interface AMSUIWebPageRenderMetricsPresenterWrapper : NSObject {
    void /* unknown type, empty encoding */ metricsFields;
    void /* unknown type, empty encoding */ primaryDataFetchComplete;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ bag;
}

- (void)viewDidAppear;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)importNetworkTimingsWithResult:(id)a0;
- (void)startResourceDataFetchOnScreen:(BOOL)a0;
- (void)endPrimaryDataFetchWithPageFields:(id)a0;
- (void)endResourceDataFetchOnScreen:(BOOL)a0;
- (void)importTimings:(id)a0;
- (id)initWithOperationID:(id)a0 bag:(id)a1 metricsOverlay:(id)a2;
- (void)startPrimaryDataFetchWithUI:(BOOL)a0;
- (void)viewDidReceiveMemoryWarning;

@end
