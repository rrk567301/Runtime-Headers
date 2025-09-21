@class NSString, CPXLaunchServicesInterface;

@interface CPXLaunchServicesProvider : NSObject <CPXLaunchServicesProviding>

@property (retain, nonatomic) CPXLaunchServicesInterface *launchServicesInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (void).cxx_destruct;

@end
