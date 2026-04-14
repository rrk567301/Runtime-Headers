@class NSString, TSXExpositorClient;

@interface TSXExpositorClientExported : NSObject <TSXExpositorClientProtocol>

@property (weak, nonatomic) TSXExpositorClient *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clockManagerIsAvailable;
- (void)clockManagerIsUnavailable;
- (void)gPTPManagerIsAvailable;
- (void)gPTPManagerIsUnavailable;

@end
