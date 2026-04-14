@interface DMCEnrollmentMCXConnection : NSObject

+ (id)shared;

- (BOOL)unenrollFromMDM:(id)a0 error:(id *)a1;
- (id)installEnrollmentProfile:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getMCX;
- (id)getSignedDeviceAttributes:(id)a0;

@end
