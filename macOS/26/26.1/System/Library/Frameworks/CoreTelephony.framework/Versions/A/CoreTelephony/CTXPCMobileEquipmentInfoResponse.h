@class CTMobileEquipmentInfoList;

@interface CTXPCMobileEquipmentInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTMobileEquipmentInfoList *infoList;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithEquipmentInfoList:(id)a0;

@end
