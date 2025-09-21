@interface CRKClassKitFacadeFactory : NSObject

+ (char)currentPlatformRequiresPersonaAdoption;
+ (char)dataSeparationEnabled;
+ (id)makeBaseClassKitFacadeWithPersonaAdoption:(char)a0;
+ (id)makeInstructorClassKitFacadeWithPersonaAdoption:(char)a0;
+ (id)makeStudentClassKitFacade;

@end
