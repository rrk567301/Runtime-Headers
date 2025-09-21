@interface PHAdjustmentDataRequestBehaviorSpec : NSObject

@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (nonatomic, getter=isSynchronous) char synchronous;

@end
