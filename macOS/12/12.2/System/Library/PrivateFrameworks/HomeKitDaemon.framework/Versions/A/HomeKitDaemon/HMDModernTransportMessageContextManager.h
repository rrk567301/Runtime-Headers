@class NSString, NSMutableDictionary;
@protocol HMDModernTransportMessageContextFactory;

@interface HMDModernTransportMessageContextManager : HMFObject <HMDModernTransportMessageContextFactory, HMFLogging>

@property (readonly, nonatomic) id<HMDModernTransportMessageContextFactory> factory;
@property (readonly, nonatomic) NSMutableDictionary *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFactory:(id)a0;
- (id)contextWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)createContextWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)contextForIdentifier:(id)a0;
- (void)completeContext:(id)a0 withPayload:(id)a1 error:(id)a2 isFinal:(BOOL)a3;

@end
