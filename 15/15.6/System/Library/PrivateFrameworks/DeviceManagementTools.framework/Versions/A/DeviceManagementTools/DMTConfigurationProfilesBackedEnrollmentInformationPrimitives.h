@class NSString;

@interface DMTConfigurationProfilesBackedEnrollmentInformationPrimitives : NSObject <DMTEnrollmentInformationPrimitives>

@property (readonly, nonatomic, getter=isEnrolled) char enrolled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
