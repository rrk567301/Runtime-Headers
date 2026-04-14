@class CTIMSRegistrationTransportInfo;

@interface CTXPCGetRegistrationIMSTransportInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTIMSRegistrationTransportInfo *info;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithIMSRegistrationInfo:(id)a0;

@end
