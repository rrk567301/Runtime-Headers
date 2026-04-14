@class MXRoutingContextModificationMetrics;
@protocol MXRoutingContextReportingServiceImpl;

@interface MXRoutingContextReportingService : NSObject {
    id<MXRoutingContextReportingServiceImpl> mReportingServiceImpl;
}

@property (readonly, retain, nonatomic) MXRoutingContextModificationMetrics *modificationMetrics;

- (void)dealloc;
- (id)initWithModificationMetrics:(id)a0 useMockService:(BOOL)a1;
- (void)sendModificationResult;

@end
