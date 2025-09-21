@class NSString;

@interface DMTWiFiAutoJoinValidator : NSObject <DMTConfigurationProfileValidator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)validateProfile:(id)a0 error:(id *)a1;

@end
