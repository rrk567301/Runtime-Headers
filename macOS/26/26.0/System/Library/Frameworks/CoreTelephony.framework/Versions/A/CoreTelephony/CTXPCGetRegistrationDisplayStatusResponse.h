@class CTRegistrationDisplayStatus;

@interface CTXPCGetRegistrationDisplayStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTRegistrationDisplayStatus *status;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithStatus:(id)a0;

@end
