@interface DMCEnrollmentMCXConnection : NSObject

+ (id)shared;

- (id)installEnrollmentProfile:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getSignedDeviceAttributes:(id)a0;
- (BOOL)unenrollFromMDM:(id)a0 error:(id *)a1;
- (id)getMCX;

@end
