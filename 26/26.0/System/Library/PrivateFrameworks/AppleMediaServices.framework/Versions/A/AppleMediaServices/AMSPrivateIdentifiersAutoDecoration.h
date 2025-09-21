@class NSArray, NSError, AMSMetricsEvent;
@protocol AMSBagProtocol;

@interface AMSPrivateIdentifiersAutoDecoration : NSObject <AMSPrivateIdentifiersAutoDecorationProtocol>

- (id)init;
- (void)autoDecorationIdentifiersForEvent:(AMSMetricsEvent *)a0 bag:(id<AMSBagProtocol>)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;

@end
