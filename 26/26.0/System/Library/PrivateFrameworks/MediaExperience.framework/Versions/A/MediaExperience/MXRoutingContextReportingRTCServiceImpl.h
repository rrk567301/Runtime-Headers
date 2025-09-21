@class NSString, NSCondition, RTCReporting, NSObject;
@protocol OS_dispatch_queue;

@interface MXRoutingContextReportingRTCServiceImpl : NSObject <MXRoutingContextReportingServiceImpl> {
    RTCReporting *mRTCReporting;
    NSCondition *mConfigurationCondition;
    BOOL mConfigured;
    NSObject<OS_dispatch_queue> *mWorkQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
