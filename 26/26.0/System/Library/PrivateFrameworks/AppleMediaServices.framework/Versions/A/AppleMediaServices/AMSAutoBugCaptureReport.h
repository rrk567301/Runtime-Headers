@class NSString, NSArray, NSDictionary, NSError, AMSAutoBugCaptureDiagnosticActionOptions, AMSAutoBugCaptureReportResponse;

@interface AMSAutoBugCaptureReport : NSObject {
    void /* function */ domain;
    void /* function */ type;
    void /* function */ subtype;
    void /* function */ subtypeContext;
    void /* function */ process;
    void /* function */ thresholdValues;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ callbackDelegate;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *subtype;
@property (nonatomic, readonly) NSString *subtypeContext;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) NSArray *thresholdValues;

+ (void)sendSnapshotFromXPCWithSignature:(NSDictionary *)a0 delay:(double)a1 events:(NSArray *)a2 payload:(NSDictionary *)a3 actions:(NSDictionary *)a4 completionHandler:(void (^)(NSDictionary *, NSError *))a5;

- (id)init;
- (void).cxx_destruct;
- (void)captureWithDelay:(double)a0 events:(NSArray *)a1 payload:(NSDictionary *)a2 actions:(AMSAutoBugCaptureDiagnosticActionOptions *)a3 completionHandler:(void (^)(AMSAutoBugCaptureReportResponse *, NSError *))a4;
- (id)initWithDomain:(id)a0 type:(id)a1 subtype:(id)a2 subtypeContext:(id)a3 process:(id)a4 thresholdValues:(id)a5;

@end
