@protocol DMTDeviceInformationPrimitives;

@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesOperation : DMTTaskOperation

@property (readonly, nonatomic) id<DMTDeviceInformationPrimitives> deviceInformationPrimitives;

+ (char)validateRequest:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)runWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 deviceInformationPrimitives:(id)a1;

@end
