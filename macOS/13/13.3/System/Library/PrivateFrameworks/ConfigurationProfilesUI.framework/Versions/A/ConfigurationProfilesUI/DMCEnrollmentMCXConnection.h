@interface DMCEnrollmentMCXConnection : NSObject

+ (id)shared;

- (id)getMCX;
- (id)getSignedDeviceAttributes:(id)a0;
- (id)installEnrollmentProfile:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)unenrollFromMDM:(id)a0 error:(id *)a1;

@end
