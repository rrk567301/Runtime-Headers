@class NSString, NSData, NSDate;

@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *properties;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) char isMultiDeviceRegistration;
@property (nonatomic) char isActive;

+ (void)hydrateMO:(id)a0 fromRegistration:(id)a1;
+ (id)materializedRegistrationFrom:(id)a0;
+ (id)predicateForActiveRegistrationsInBootSession:(id)a0;

@end
