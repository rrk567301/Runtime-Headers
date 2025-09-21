@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext>

@property (readonly, nonatomic, getter=isComplete) char complete;
@property (readonly, nonatomic, getter=isFailed) char failed;
@property (readonly, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
