@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface PFTDispatchSource : NSObject <BSCancellable>

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;

@end
