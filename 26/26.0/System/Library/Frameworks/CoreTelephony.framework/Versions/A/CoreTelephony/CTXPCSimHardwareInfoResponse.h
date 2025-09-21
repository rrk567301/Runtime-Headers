@class CTSimHardwareInfo;

@interface CTXPCSimHardwareInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSimHardwareInfo *hardwareInfo;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithHardwareInfo:(id)a0;

@end
