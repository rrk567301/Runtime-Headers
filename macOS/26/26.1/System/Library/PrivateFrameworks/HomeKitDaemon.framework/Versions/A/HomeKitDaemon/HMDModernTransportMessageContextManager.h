@class NSString, NSMutableDictionary;
@protocol HMDModernTransportMessageContextFactory;

@interface HMDModernTransportMessageContextManager : HMFObject <HMDModernTransportMessageContextFactory, HMFLogging>

@property (readonly, weak, nonatomic) id<HMDModernTransportMessageContextFactory> factory;
@property (readonly, nonatomic) NSMutableDictionary *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)createContextWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 dateProvider:(id)a3 timerProvider:(id)a4;
- (void).cxx_destruct;
- (void)completeContext:(id)a0 withPayload:(id)a1 error:(id)a2 isFinal:(BOOL)a3;
- (id)initWithFactory:(id)a0;
- (id)contextWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 dateProvider:(id)a3 timerProvider:(id)a4;
- (id)contextForIdentifier:(id)a0;
- (id)init;

@end
