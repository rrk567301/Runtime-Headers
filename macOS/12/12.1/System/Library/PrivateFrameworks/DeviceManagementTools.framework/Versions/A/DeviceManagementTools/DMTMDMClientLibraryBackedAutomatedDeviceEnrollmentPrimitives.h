@class DEPClient, MDMCloudConfiguration, NSString;

@interface DMTMDMClientLibraryBackedAutomatedDeviceEnrollmentPrimitives : NSObject <DMTAutomatedDeviceEnrollmentPrimitives>

@property (readonly, nonatomic) DEPClient *DEPClient;
@property (readonly, nonatomic) MDMCloudConfiguration *cloudConfiguration;
@property (readonly, nonatomic, getter=isEnrolled) BOOL enrolled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)enrollWithNonce:(id)a0 completionBlock:(id /* block */)a1;

@end
